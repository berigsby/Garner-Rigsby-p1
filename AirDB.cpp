/*
 * AirDB.cpp
 * Group Members: Ben Rigsby, Jalysa Garner
 * Submission Date: 2-6-17
 *
 * Purpose: Gathers info from flight and passenger class for a client
 * to use
 *
 * Statement of Academic Honesty:
 *
 * The following code represents our own work. We have neither
 * received nor given inappropriate assistance. We have not copied
 * or modified code from any source other than the course webpage
 * or the course textbook. We recognize that any unauthorized
 * assistance or plagiarism will be handled in accordance with
 * the University of Georgia's Academic Honesty Policy and the
 * policies of this course. We recognize that my work is based
 * on an assignment created by the Department of Computer
 * Science at the University of Georgia. Any publishing
 * or posting of source code for this project is strictly
 * prohibited unless you have written consent from the Department
 * of Computer Science at the University of Georgia.
 */

#include "AirDB.h"
#include <iostream>
#include <string>

using namespace std;
/*
struct Node{
  Flight flight;
  Node * link;
};
*/

AirDB::AirDB(){
  length = 0;
  listData = NULL;
}//Constructor

AirDB::~AirDB(){
  Node * temp;
  while(listData != NULL){
    temp = listData;
    listData = listData->link;
    delete temp;
  }//while
}//destructor

bool AirDB::IsFlightsFull() const{
  return (length == maxFlights);
}//IsFlightFull

int AirDB::GetNumFlight() const{
  return length;
}//GetNumFlight

Flight AirDB::GetFlight(Flight flight2, bool& found){
  bool moreToSearch;
  Node * loc;
  loc = listData;
  found = false;
  moreToSearch = (loc != NULL);
  while(moreToSearch && !found){
    if(flight2.flightNo > (loc->flight).flightNo){
      loc = loc->link;
      moreToSearch = (loc != NULL);
    }else if(flight2.flightNo == (loc->flight).flightNo){
      found = true;
      flight2 = loc->flight;
    }else{
      moreToSearch = false;
    }//else
  }//while
  return flight2;
}//GetFlight

void AirDB::addFlight(Flight flight){
  Node * newNode;
  Node * prevNode;
  Node * loc;
  bool moreToSearch;
  loc = listData;
  prevNode = NULL;
  moreToSearch = (loc != NULL);
  
  while(moreToSearch){
    if(flight.flightNo > (loc->flight).flightNo){
      prevNode = loc;
      loc = loc->link;
      moreToSearch = (loc != NULL);
    }else{
      moreToSearch = false;
    }//else
  }//while
  newNode = new Node;
  newNode->flight = flight;
  
  if(prevNode == NULL){
    newNode->link = listData;
    listData = newNode;
  } else {
    newNode->link = loc;
    prevNode->link = newNode;
  }//else
  length ++;
  cout << "Added flight " << length << " with " << flight.maxPassenger << " passengers" << endl;
}//addFlight

void AirDB::removeFlight(Flight flight){
  Node * loc = listData;
  Node * temp;
  if(flight.flightNo == (listData->flight).flightNo){
    temp = loc;
    listData = listData->link;
  }else{
    while(flight.flightNo != ((listData->link)->flight).flightNo){
      loc = loc->link;
    }//while
    temp = loc->link;
    loc->link = (loc->link)->link;
  }//else
  delete temp;
  length --;
}//removeFlight

void AirDB::ResetList(){
  currentPos = NULL;
}//ResetList

Flight AirDB::GetNextFlight(){
  Flight flight;
  if(currentPos == NULL)
    currentPos = listData;
  //else
  //  currentPos = currentPos->link;
  flight = currentPos->flight;
  currentPos = currentPos->link;
  return flight;
}//GetNextFlight

void AirDB::showAllFlights(){
  ResetList();
  for(int x = 0; x < length; x++){
    Flight f = GetNextFlight();
    cout << "Flight Number: " << f.flightNo << endl;
  }//for
  ResetList();
}//showAllFlights

void AirDB::showAllFlightsAndPassengers(){
  ResetList();
  for(int x = 0; x < length; x++){
    Flight f = GetNextFlight();
    cout << "Flight Number: " << (f.flightNo+1) << endl;
    f.showAllPassengers();
  }//for
  ResetList();
}//showAllFlightsAndPassengers

void AirDB::showNewPassengers(int flightNo, int K){
  ResetList();
  for(int x = 0; x < length; x++){
    Flight f = GetNextFlight();
    if(f.flightNo == flightNo){
      cout << "Flight Number: " << f.flightNo << endl;
      f.ResetList();
      for(int y = K; y < f.length; y ++){
	Passenger p = f.GetNextPassenger();
	p.Print(std::cout);
      }//for
      f.ResetList();
    }//if
  }//for
  ResetList();
}//showNewPassengers

void AirDB::showFirstPassenger(int flightNo, int K){
  ResetList();
  for(int x = 0; x < length; x++){
    Flight f = GetNextFlight();
    if(f.flightNo == flightNo){
      cout << "Flight Number: " << f.flightNo << endl;
      f.ResetList();
      for(int y = 0; y < f.length || y < K; y ++){
	Passenger p = f.GetNextPassenger();
	p.Print(std::cout);
      }//for
      f.ResetList();
    }//if
  }//for
  ResetList();  
}//showFirstPassengers

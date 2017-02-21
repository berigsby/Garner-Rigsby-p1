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

struct Node{
  Flight flight;
  Node * link;
};

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

bool AirDB::IsFlightFull() const{
  Node * loc;
  try{
    loc = new Node;
    delete loc;
    return false;
  } catch (bad_alloc exception){
    return true;
  }//catch
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
  /*
  Node * temp;
  while(listData != NULL){
    temp = listData;
    listData = listData->link;
    delete temp;
    }//while
  length = 0;
  */
  currentPos = NULL;
}//ResetList

Flight AirDB::GetNextFlight(){
  Flight flight;
  if(currentPos == NULL)
    currentPos = listData;
  flight = currentPos->flight;
  currentPos = currentPos->link;
  return flight;
}//GetNextFlight

void AirDB::showAllFlights(){

}//showAllFlights

void AirDB::showAllFlightsAndPassengers(){

}//showAllFlightsAndPassengers

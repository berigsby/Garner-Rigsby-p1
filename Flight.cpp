/*
 * Flight.cpp
 * Group Members: Ben Rigsby, Jalysa Garner
 * Submission Date: 2-6-17
 *
 * Purpose: Flights store passenger lists using arrays
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

#include "Passenger.h"
#include "Flight.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/*
struct Node2{
  Passenger passenger;
  Node2 * link;
};
*/
Flight::Flight(){
  length = 0;
  listData = NULL;
}//flight constructor

Flight::Flight(int maxPassenger,int flightNo){
  length = 0;
  listData = NULL;
  this->maxPassenger = maxPassenger;
  this->flightNo = flightNo;
}//flight constructor

Flight::~Flight(){
  Node2 * temp;
  while(listData != NULL){
    temp = listData;
    listData = listData->link;
    delete temp;
  }//while
}//deconstructor

void Flight::MakeFlightEmpty(){
  Node2 * temp;
  while(listData != NULL){
    temp = listData;
    listData = listData->link;
    delete temp;
    }//while
  length = 0;
}//MakeFlightEmpty

void Flight::ResetList(){
  currentPos = NULL;
}//ResetList

int Flight::GetNumPassengerInFlight() const{
  return length;
}//GetNumPassengerInFlight

Passenger Flight::GetPassenger(Passenger passenger2, bool& found){
  bool moreToSearch;
  Node2 * loc;
  loc = listData;
  found = false;
  moreToSearch = (loc != NULL);
  while(moreToSearch && !found){
    if(passenger2.ComparedTo(loc->passenger) == GREATER){
      loc = loc->link;
      moreToSearch = (loc != NULL);
      }else if(passenger2.ComparedTo(loc->passenger) == EQUAL){
      found = true;
      passenger2 = loc->passenger;
    }else{
      moreToSearch = false;
    }//else
  }//while
  return passenger2;
}//GetPassenger

void Flight::addPassenger(Passenger p){
  Node2 * newNode;
  Node2 * prevNode;
  Node2 * loc;
  bool moreToSearch;
  loc = listData;
  prevNode = NULL;
  moreToSearch = (loc != NULL);

  while(moreToSearch){
    if(p.ComparedTo(loc->passenger) == LESS){
      prevNode = loc;
      loc = loc->link;
      moreToSearch = (loc != NULL);
    }else{
      moreToSearch = false;
    }//else
  }//while
  newNode = new Node2;
  newNode->passenger = p;
  
  if(prevNode == NULL){
    newNode->link = listData;
    listData = newNode;
  } else {
    newNode->link = loc;
    prevNode->link = newNode;
  }//else
  length ++;
}//addPassenger

void Flight::removePassenger(Passenger passenger){
  Node2 * loc = listData;
  Node2 * temp;
  if(passenger.ComparedTo(listData->passenger) == EQUAL){
    temp = loc;
    listData = listData->link;
  }else{
    while(passenger.ComparedTo((listData->link)->passenger) != EQUAL){
      loc = loc->link;
    }//while
    temp = loc->link;
    loc->link = (loc->link)->link;
  }//else
  delete temp;
  length --;
}//removePassenger

void Flight::showAllPassengers(){
  ResetList();
  cout << length << endl;
  for(int y = 0; y < length; y ++){
    Passenger p = GetNextPassenger();
    p.Print(std::cout);
  }//for
  ResetList();
}//showAllPassengers

bool Flight::IsFlightFull()const{
  return (length == maxPassenger);
}//isFlightFull

Passenger Flight::GetNextPassenger(){
  Passenger passenger;
  if(currentPos == NULL)
    currentPos = listData;
  passenger = currentPos->passenger;
  currentPos = currentPos->link;
  return passenger;
}//GetNextPassenger

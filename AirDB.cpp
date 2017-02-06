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

AirDB::AirDB(){
  list = new Flight*[maxFlights];
  currentPos = 0;
}//Constructor

AirDB::~AirDB(){
  delete[] list;
}//destructor

bool AirDB::IsFlightFull() const{
  return (currentPos-1 == 20);
}//IsFlightFull

int AirDB::GetNumFlight() const{
  return currentPos;
}//GetNumFlight

Flight AirDB::GetFlight(Flight flight2, bool& found){
  return flight2;
}//GetFlight

void AirDB::addFlight(Flight * flight){
  if(currentPos < maxFlights){
    list[currentPos] = flight;
    currentPos++;
    cout << "Flight number " << flight->flightNo << " was added to flight list" << endl;
  }//if
}//addFlight

void AirDB::removeFlight(Flight flight){
  for(int i =0; i < currentPos; i++){
    if(list[i]->flightNo == flight.flightNo){
      cout << "Flight number " << list[i]->flightNo << " was removed from the flight list" << endl;
      list[i] = list[currentPos-1];
      currentPos--;
      break;
    }//if
  }//for
}//removeFlight

void AirDB::ResetList(){
  currentPos = 0;
}//ResetList

Flight AirDB::GetNextFlight(){
  if(currentPos == (maxFlights-1)){
  return * list[currentPos];
  }
  else
    return * list[currentPos+1];
}//GetNextFlight

void AirDB::showAllFlights(){
  for(int i = 0; i < currentPos; i++){
    cout << "Flight Number: " << list[i]->flightNo << endl;
  }
}//showAllFlights

void AirDB::showAllFlightsAndPassengers(){
  for(int x = 0; x<currentPos; x++){
    list[x]->showAllPassengers();
  }//for
  //showAllFlights();
}//showAllFlightsAndPassengers

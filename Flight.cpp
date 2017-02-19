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

Flight::Flight(int maxPassenger,int flightNo){

}//flight constructor

Flight::~Flight(){

}//deconstructor

void Flight::MakeFlightEmpty(){

}//MakeFlightEmpty

void Flight::ResetList(){

}//ResetList

int Flight::GetNumPassengerInFlight() const{
  return 0;
}//GetNumPassengerInFlight

Passenger Flight::GetPassenger(Passenger passenger2, bool& found){
  return passenger2;
}//GetPassenger

void Flight::addPassenger(Passenger p){

}//addPassenger

void Flight::removePassenger(Passenger passenger){

}//removePassenger

void Flight::showAllPassengers(){

}//showAllPassengers

bool Flight::IsFlightFull()const{
  return true;
}//isFlightFull

Passenger Flight::GetNextPassenger(){
  Passenger p(0,"","",0);
  return p;
}//GetNextPassenger

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
  currentPos=0;
  PassengerList = new Passenger[maxPassenger];
  this->flightNo = flightNo;
  this->maxPassenger = maxPassenger;  
}//flight constructor

Flight::Flight(const Flight &other){
  currentPos = other.currentPos;
  maxPassenger = other.maxPassenger;
  flightNo = other.flightNo;
  PassengerList = new Passenger[maxPassenger];
  for(int x = 0; x < currentPos; x++){
    PassengerList[x] = other.PassengerList[x];
  }//for
}//copyConstructor

Flight::~Flight(){
  delete[] PassengerList;
}//deconstructor

void Flight::MakeFlightEmpty(){
  //just call reset?
}//MakeFlightEmpty

/*if i want to reset my list, we can reset the current position to 0, so that 
  way all odd data will just be overwritten*/
void Flight::ResetList(){
  currentPos = 0;  
}//ResetList

/*just returning the position we are at in the array, which equates to how 
  many passengers we have */
int Flight::GetNumPassengerInFlight() const{
  return currentPos+1;
}//GetNumPassengerInFlight

Passenger Flight::GetPassenger(Passenger passenger2, bool& found){
  return passenger2;
}//GetPassenger

/*added to a passenger to the object and incremented the current postion*/
void Flight::addPassenger(Passenger p){
  if(currentPos < maxPassenger){
    PassengerList[currentPos] = p;
    currentPos++;
    cout << p.firstName << " " << p.lastName << " added to flight " << flightNo << " at seat " << p.seatNo << endl;
  }//if
}//addPassenger

/*i searched the flight number from the passenger object to the passenger 
object passed it and then decremented the current position and replaced the 
removed item with the last item*/
void Flight::removePassenger(Passenger passenger){
  for(int i =0; i < currentPos; i++){
    if(PassengerList[i].ComparedTo(passenger) == EQUAL){
      cout << PassengerList[i].lastName << " removed from flight " << flightNo << endl;
      PassengerList[i] = PassengerList[currentPos-1];
      currentPos--;
      break;
    }//if
  }//for
}//removePassenger

void Flight::showAllPassengers(){
  cout<<"Flight #   LastName   FirstName   Seat#"<<endl; 
  for(int i=0; i < currentPos; i++){
    cout <<  PassengerList[i].flightNo;
    cout <<"          "<< PassengerList[i].lastName;
    cout <<"        "<<PassengerList[i].firstName;
    cout<<"   "<<PassengerList[i].seatNo<<endl;
  }//for
}//showAllPassengers

bool Flight::IsFlightFull()const{
  return (maxPassenger==currentPos);
}//isFlightFull

Passenger Flight::GetNextPassenger(){
  return  PassengerList[currentPos];
}//GetNextPassenger

#include "Passenger.h"
#include "Flight.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/*have to come back to the that*/
Flight::Flight(int maxPassenger,int flightNo){
  currentPos=0;
  PassengerList = new Passenger[maxPassenger];
  this->flightNo = flightNo;
  this->maxPassenger = maxPassenger;
  
 }//flight constructor

Flight::Flight(){
  

}//flight constructor

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
  }//if
}//addPassenger

/*i searched the flight number from the passenger object to the passenger 
object passed it and then decremented the current position and replaced the 
removed item with the last item*/
void Flight::removePassenger(Passenger passenger){
  for(int i =0; i < currentPos; i++){
    if(PassengerList[i].ComparedTo(passenger) == EQUAL){
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
    cout<<"         "<<PassengerList[i].seatNo<<endl;
  }//for
}//showAllPassengers

bool Flight::IsFlightFull()const{
  return (maxPassenger==currentPos);
}//isFlightFull

Passenger Flight::GetNextPassenger(){
  Passenger p1;
  return p1;
}//GetNextPassenger

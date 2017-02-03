#include "passenger.h"
#include "flight.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/*NEEDS WORK: for some reason, when I add more than two passengers it gives me a segement fault                                      I don't know why!!! Also when i use the removePassenger with two passenger objects it works                                        but not three or more*/

/*have to come back to the that*/
flight::flight(int maxPassenger,int flightNo){
  currentPos=0;
  passengerList = new passenger[maxPassenger];
  this->flightNo = flightNo;
  this->maxPassenger = maxPassenger;
}
/*if i want to reset my list, we can reset the current position to 0, so that 
  way all odd data will just be overwritten*/
void flight::ResetList(){
  currentPos = 0;
  
}
/*just returning the position we are at in the array, which equates to how 
  many passengers we have */
int flight::GetNumPassengerInFlight() const{
  return currentPos+1;
}
/*added to a passenger to the object and incremented the current postion*/
void flight::addPassenger(passenger passenger){
  //add if currentPos < max...
  passengerList[currentPos] = passenger;
  currentPos++;
  //  cout <<"Current Position "<<currentPos<<endl;
}
/*i searched the flight number from the passenger object to the passenger 
object passed it and then decremented the current position and replaced the 
removed item with the last item*/
void flight::removePassenger(passenger passenger){
  /* for(int i =0; i<currentPos; i++){
    if(passengerList[i].flightNo == passenger.flightNo){
      passengerList[i] = passengerList[currentPos-1];
      currentPos--;
    }
    }*/
}


void flight::showAllPassengers(){
  cout<<"Flight #   LastName   FirstName   Seat#"<<endl; 
 for(int i=0; i < currentPos; i++){
   cout << passengerList[i].flightNo;
   cout <<"          "<< passengerList[i].lastName;
   cout <<"        "<<passengerList[i].firstName;
   cout<<"         "<<passengerList[i].seatNo<<endl;
  }
}

bool flight::IsFlightFull()const{
  return (maxPassenger==currentPos);
}

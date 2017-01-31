#include "passenger.h"
#include "flight.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/*have to come back to the that*/
flight::flight(int maxPassenger,int flightNo){
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

void flight::addPassenger(passenger passenger){
  passengerList[currentPos] = passenger;
  currentPos++;
}

void flight::removePassenger(passenger passenger){
  for(int i =0; i<currentPos; i++){
    if(passengerList[i].flightNo == passenger.flightNo){
      passengerList[i] = passengerList[currentPos];
      currentPos++;
    }
  }
}












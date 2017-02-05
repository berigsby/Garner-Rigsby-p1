#include "Passenger.h"
#include "Flight.h"
#include "AirDB.h"
#include <iostream>

using namespace std;

AirDB::AirDB(){
}

bool AirDB::IsFlightFull() const{
  return (currentPos-1 == 20);
}//IsFlightFull

int AirDB::GetNumFlight() const{
  return currentPos-1;
}//GetNumFlight

Flight AirDB::GetFlight(Flight flight2, bool& found){
  Flight f;
  return f;
}//GetFlight

void AirDB::addFlight(Flight flight){

  if(currentPos < maxFlights){
  //list = new Flight[maxFlights];
  list[currentPos] = & flight;
  currentPos++;
  }
  //  cout << "Happy Feet" <<endl;
  list[currentPos] = & flight;

}//addFlight

void AirDB::removeFlight(Flight flight){
  for(int i =0; i < currentPos; i++){
    if(list[i]->flightNo == flight.flightNo){
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
  return * list[currentPos];
}//GetNextFlight

void AirDB::showAllFlights(){

}//showAllFlights

void AirDB::showAllFlightsAndPassengers(){
   /*THIS IS WHERE I GET THE ERROR!!!!!*/
  for(int x = 0; x<currentPos; x++){
    list[x]->showAllPassengers();
  }//for
}//showAllFlightsAndPassengers

int main(){
  // cout <<"hello"<<endl;
  /*  passenger p;
  p.Initializer(1,"Garner","Jalysa",1);
  flight f(12,12);
  f.addPassenger(p);
  //f.showAllPassengers();
  passenger p1;
  p1.Initializer(12,"Rigsby","Ben",2);
  f.addPassenger(p1);
  f.showAllPassengers();
  cout<<"Is the flight full: "<<boolalpha<<f.IsFlightFull()<<endl;*/
  // flight f(12,12);
 Passenger p1(1,"Garner","Jalysa",1);
 Passenger p2(1,"Pass","Inger",2);
 Passenger p0(12,"Rigsby","Ben",2); 
 
 Flight f(12,12); 
 f.addPassenger(p0);
 f.addPassenger(p1);
 //f.addPassenger(p0);
 f.addPassenger(p2);
 f.removePassenger(p1);
 f.showAllPassengers();

 return 0;

}

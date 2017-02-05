#include "Passenger.h"
#include "Flight.h"
#include "AirDB.h"
#include <iostream>

using namespace std;

const int maxFlights = 20;
Flight *list[maxFlights];
int currentPos = 0;

bool AirDB::IsFlightFull() const{
  return true;
}//IsFlightFull

int AirDB::GetNumFlight() const{
  return 0;
}//GetNumFlight

Flight AirDB::GetFlight(Flight flight2, bool& found){
  Flight f;
  return f;
}//GetFlight

void AirDB::addFlight(Flight flight){
  
}//addFlight

void AirDB::removeFlight(Flight flight){

}//removeFlight

void AirDB::ResetList(){

}//ResetList

Flight AirDB::GetNextFlight(){
  Flight f;
  return f;
}//GetNextFlight

void AirDB::showAllFlights(){

}//showAllFlights

void AirDB::showAllFlightsAndPassengers(){

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

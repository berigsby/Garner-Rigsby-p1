#include "Passenger.h"
#include "Flight.h"
#include "AirDB.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

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
  string line;
  int number = 1;
  Flight f(50,50);
  ifstream myfile("passengers.dat");
  if(myfile.is_open()){
    while(getline (myfile,line)){
    stringstream iss(line);
    string lastname;
       string firstname;
	iss >> lastname;
	iss >> firstname;
	Passenger p(number,lastname,firstname,number);
	f.addPassenger(p);
	//cout <<lastname<<endl;
	//cout <<firstname<<endl;
      number++;
	// cout << line << endl;
    }
    myfile.close();
  }
   f.showAllPassengers();
  return 0;

}

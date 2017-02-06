#include "Passenger.h"
#include "Flight.h"
#include "AirDB.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;
/*still cant add flights to AirDB, once that's done i think that's it*/
AirDB::AirDB(){
  //const int maxFlights=20;
  //Flight **list;
  list = new Flight*[maxFlights];
  currentPos = 0;
}

AirDB::~AirDB(){
  delete[] list;
}

bool AirDB::IsFlightFull() const{
  return (currentPos-1 == 20);
}//IsFlightFull

int  AirDB::GetNumFlight() const{
  return currentPos-1;
}//GetNumFlight

Flight AirDB::GetFlight(Flight flight2, bool& found){
  return flight2;
}//GetFlight

void AirDB::addFlight(Flight flight){
  if(currentPos < maxFlights){
    list[currentPos] = & flight;
    currentPos++;
  }//if
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
  if(currentPos == (maxFlights-1)){
  return * list[currentPos];
  }
  else
    return * list[currentPos+1];
}//GetNextFlight

void AirDB::showAllFlights(){
  for(int i = 0; i < currentPos; i++){
    cout << list[i]->flightNo << endl;
  }
}//showAllFlights

void AirDB::showAllFlightsAndPassengers(){
  /*THIS IS WHERE I GET THE ERROR!!!!!*/
  for(int x = 0; x<currentPos; x++){
    list[x]->showAllPassengers();
  }//for
  showAllFlights();
}//showAllFlightsAndPassengers
/*
int main(){
  string line;
  int number = 1;
  Flight f(50,50);
<<<<<<< HEAD
  
=======
  AirDB d;
>>>>>>> f1a1363f7d377e750fa7399837561bacf8b64ed7
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
<<<<<<< HEAD
  f.showAllPassengers();

  ::currentPos = 0;
  ::list = new Flight*[maxFlights];
  //Flight f1;
  //::list[0] = & f;
  ::addFlight(f);

=======
  Passenger p2(13,"Garner","Jalysa",13);
  f.removePassenger(p2); //it works!!!
  f.showAllPassengers();
>>>>>>> f1a1363f7d377e750fa7399837561bacf8b64ed7
  return 0;

}
*/

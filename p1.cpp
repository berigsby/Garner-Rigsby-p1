#include "Passenger.h"
#include "Flight.h"
#include "AirDB.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

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
      number++;
    }//while
    myfile.close();
  }//if
  //f.showAllPassengers();

  AirDB listy;
  listy.addFlight(f);
  listy.addFlight(f);

  listy.showAllFlightsAndPassengers();
  f.showAllPassengers();
  return 0;
}

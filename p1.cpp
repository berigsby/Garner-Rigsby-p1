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
	//cout <<lastname<<endl;
	//cout <<firstname<<endl;
	number++;
	// cout << line << endl;
    }
    myfile.close();
  }
  f.showAllPassengers();

  AirDB listy;
  //listy.list = new Flight*[20];
  //listy.currentPos = 0;
  listy.addFlight(f);
  listy.addFlight(f);

  return 0;
}

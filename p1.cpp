/*
 * p1.cpp
 * Group Members: Ben Rigsby, Jalysa Garner
 * Submission Date: 2-6-17
 *
 * Purpose: Sample Client program
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
#include "AirDB.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
  int x = 1;
  cout << "Task " << x++ << endl;
  cout << "**************************************"  << endl;
  AirDB list = AirDB();
  Flight f1(50,list.GetNumFlight());
  list.addFlight(f1);
  Flight f2(100,list.GetNumFlight());
  list.addFlight(f2);
  Flight f3(150,list.GetNumFlight());
  list.addFlight(f3);
  Flight f4(50,list.GetNumFlight());
  list.addFlight(f4);
  Flight f5(100,list.GetNumFlight());
  list.addFlight(f5);

  cout << endl;
  cout << "Task " << x++ << endl;
  cout << "**************************************"  << endl;

  Passenger p(1,"Ben", "Rigsby",1);
  f1.addPassenger(p);
  f1.showAllPassengers();
  list.ResetList();
  list.GetNextFlight();
  (list.currentPos->flight).addPassenger(p);

  /*
  ifstream myfile("passengers.dat");
  string line;
  int flightNumber = 0;
  int seatNumber = 1;
  if(myfile.is_open()){
    while(getline (myfile,line)){
      list.ResetList();
      stringstream iss(line);
      string lastname;
      string firstname;
      iss >> lastname;
      iss >> firstname;
      flightNumber = 1;
      Passenger p(flightNumber,lastname,firstname,seatNumber);
      list.GetNextFlight();
      (list.currentPos->flight).addPassenger(p);
      flightNumber++;
      lastname += "-Alt1";
      
      Passenger p1(flightNumber,lastname,firstname,seatNumber);
      Flight F2 = list.GetNextFlight();
      F2.addPassenger(p1);
      flightNumber++;
      lastname += "2";

      Passenger p2(flightNumber,lastname,firstname,seatNumber);
      f3.addPassenger(p2);
      flightNumber++;
      lastname += "3";

      Passenger p3(flightNumber,lastname,firstname,seatNumber);
      f4.addPassenger(p3);
      flightNumber++;
      lastname += "4";

      Passenger p4(flightNumber,lastname,firstname,seatNumber);
      f5.addPassenger(p4);
      seatNumber ++;
      }//while
    myfile.close();
  }//if
  */
  list.showAllFlightsAndPassengers();
  return 0;
}

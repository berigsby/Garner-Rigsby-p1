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
    
  ifstream myfile("passengers.dat");
  string line;
  int flightNumber = 1;
  int seatNumber = 1;
  if(myfile.is_open()){
    while(getline (myfile,line)){
      stringstream iss(line);
      string lastname;
      string firstname;
      iss >> lastname;
      iss >> firstname;
      flightNumber = 1;
      Passenger p1 = Passenger(flightNumber,lastname,firstname,seatNumber);
      (list.listData->flight).addPassenger(p1);
      flightNumber++;

      Passenger p2(flightNumber,(lastname+"-alt1"),firstname,seatNumber);
      ((list.listData->link)->flight).addPassenger(p2);
      seatNumber += 50;
      Passenger p22(flightNumber,(lastname+"-alt2"),firstname,seatNumber);
      ((list.listData->link)->flight).addPassenger(p22);
      flightNumber++;
      seatNumber -=50;

      Passenger p3(flightNumber,(lastname+"-alt3"),firstname,seatNumber);
      (((list.listData->link)->link)->flight).addPassenger(p3);
      seatNumber += 50;
      Passenger p33(flightNumber,(lastname+"-alt4"),firstname,seatNumber);
      (((list.listData->link)->link)->flight).addPassenger(p33);
      seatNumber += 50;
      Passenger p333(flightNumber,(lastname+"-alt5"),firstname,seatNumber);
      (((list.listData->link)->link)->flight).addPassenger(p333);
      flightNumber++;
      seatNumber -=100;

      Passenger p4(flightNumber,(lastname+"-alt6"),firstname,seatNumber);
      ((((list.listData->link)->link)->link)->flight).addPassenger(p4);
      flightNumber++;

      Passenger p5(flightNumber,(lastname+"-alt7"),firstname,seatNumber);
      (((((list.listData->link)->link)->link)->link)->flight).addPassenger(p5);
      seatNumber += 50;
      Passenger p55(flightNumber,(lastname+"-alt8"),firstname,seatNumber);
      (((((list.listData->link)->link)->link)->link)->flight).addPassenger(p55);
      seatNumber -=50;
      seatNumber ++;
      }//while
    myfile.close();
  }//if
  //(((((list.listData->link)->link)->link)->link)->flight).showAllPassengers();
  list.showAllFlightsAndPassengers();
  return 0;
}

/*
 * Passenger.cpp
 * Group Members: Ben Rigsby, Jalysa Garner
 * Submission Date: 2-6-17
 *
 * Purpose: Passengers are used to store their names and seats,
 * for addign to flights
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
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Passenger::Passenger(){
  this->flightNo = -1;
  this->lastName = "";
  this->firstName = "";
  this->seatNo = -1;
}//Constructor

Passenger::Passenger(int flightNo, string lastName,string firstName,int seatNo){
  this->flightNo = flightNo;
  this->lastName = lastName;
  this->firstName = firstName;
  this->seatNo = seatNo;
}//Constructor

RelationType Passenger::ComparedTo(Passenger p) const{
  int rv = (this->lastName).compare(p.lastName);
  if(rv == 0)
    return EQUAL;
  else if(rv < 0)
    return LESS;
  else
    return GREATER;
}//CompareTo

void Passenger::Print(std::ostream& out) const{
  cout << firstName << " " << lastName << ", on flight " << flightNo << ", in seat " << seatNo << endl;
}//Print

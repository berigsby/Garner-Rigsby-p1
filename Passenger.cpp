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

//#include <ofstream>
using namespace std;

void Passenger::Print(){
  cout << this->flightNo << " ";
  cout << this->firstName << " ";
  cout << this->lastName << " ";
  cout << this->seatNo << endl;
}//Print

Passenger::Passenger(){
  flightNo =0;
  firstName = "";
  lastName = "";
  seatNo = 0;
}//constructor
/*
Passenger::Passenger(const Passenger &other){
  firstName = other.firstName;
  lastName = other.lastName;
  flightNo = other.flightNo;
  seatNo = other.seatNo;
}//copyConstructor
*/
Passenger::Passenger(int flightNo, string lastName,string firstName,int seatNo){
  // cout <<"flightNo is: "<<flightNo<<endl;
  this->flightNo = flightNo;
  this->lastName = lastName;
  this->firstName = firstName;
  this->seatNo = seatNo;
}

RelationType Passenger::ComparedTo(Passenger p) const{
  int rv = this->lastName.compare(p.lastName);
  if(rv == 0)
    return EQUAL;
  else if(rv < 0)
    return LESS;
  else
    return GREATER;
}//CompareTo

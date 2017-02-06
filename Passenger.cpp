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

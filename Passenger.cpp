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
  if(this->flightNo == p.flightNo){
    if(this->lastName.compare(p.lastName)==0){
      if(this->firstName.compare(p.firstName)==0){
	if(this->seatNo == p.seatNo){
	  return EQUAL;
	}//if
      }//if
    }//if
  }//if
  return LESS;
}//CompareTo

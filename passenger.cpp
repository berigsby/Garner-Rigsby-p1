#include "passenger.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void passenger::print()
{
  cout << this->flightNo << " ";
  cout << this->firstName << " ";
  cout << this->lastName << " ";
  cout << this->seatNo << endl;
}

void passenger::Initializer(int flightNo, string lastName,string firstName,int seatNo){
  // cout <<"flightNo is: "<<flightNo<<endl;
  this->flightNo = flightNo;
  this->lastName = lastName;
  this->firstName = firstName;
  this->seatNo = seatNo;
}

RelationType passenger::ComparedTo(passenger p) const{
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

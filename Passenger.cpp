#include "Passenger.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Passenger::Print()
{
  cout << this->flightNo << " ";
  cout << this->firstName << " ";
  cout << this->lastName << " ";
  cout << this->seatNo << endl;
}

Passenger::Passenger(){

}//Passenger()

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

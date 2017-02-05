#include "Passenger.h"
#include <iostream>
#include <string>
#include <sstream>
<<<<<<< HEAD
//#include <ofstream>
using namespace std;

void Passenger::Print(ofstream&)const
{
  // os << "Print something out"<<endl;
=======
using namespace std;

void Passenger::Print()
{
>>>>>>> 9ed67c3bf870db88f88859cbbb7de93f79794851
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
<<<<<<< HEAD

=======
>>>>>>> 9ed67c3bf870db88f88859cbbb7de93f79794851

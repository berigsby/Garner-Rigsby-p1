#include "passenger.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void passenger::print()
{
  cout << "HI" << endl;
}

void passenger::Initializer(int flightNo, string lastName,string firstName,int seatNo){
  // cout <<"flightNo is: "<<flightNo<<endl;
  this->flightNo = flightNo;
  this->lastName = lastName;
  this->firstName = firstName;
  this->seatNo = seatNo;
}




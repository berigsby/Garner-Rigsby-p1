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
  this->flightNo = flightNo;
  this->lastName = lastName;
  this->firstName = firstName;
  this->seatNo = seatNo;
}
/*
int main ()
{
  Passenger p;
  p.Initializer(50, "Garner", "Jalysa", 45);
  print(pass[0]);
}
*/

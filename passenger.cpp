#include "Passenger.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


Passenger::Passenger(){
  position=0;
}

void print(passen p)
{
  cout << p.flightNo<<endl;
  cout << p.lastName<<endl;
  cout << p.firstName<<endl;
  cout << p.seatNo<<endl;
}

void Passenger::Initializer(int flightNo, string lastName,string firstName,int seatNo){
  pass[position].flightNo = flightNo;
  pass[position].lastName = lastName;
  pass[position].firstName = firstName;
  pass[position].seatNo = seatNo;
  position++;
}

int main ()
{
  Passenger p;
  p.Initializer(50, "Garner", "Jalysa", 45);
  print(pass[0]);
}

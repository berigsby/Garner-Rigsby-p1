#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>

using namespace std;

class passenger
{
 public:
  int flightNo;
  string lastName;
  string firstName;
  int seatNo;

  void print();
  void Initializer(int flightNo, string lastName,string firstName,int seatNo);
  //CompareTo
};

#endif // PASSENGER_H

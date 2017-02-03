#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>

using namespace std;

enum RelationType{ LESS, GREATER, EQUAL};

class passenger
{
 public:
  int flightNo;
  string lastName;
  string firstName;
  int seatNo;
  int getFlightNo();
  void print();
  void Initializer(int flightNo, string lastName,string firstName,int seatNo);
  RelationType ComparedTo(passenger p) const;
};

#endif // PASSENGER_H

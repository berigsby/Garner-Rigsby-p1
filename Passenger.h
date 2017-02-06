#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>

using namespace std;

enum RelationType{ LESS, GREATER, EQUAL};

class Passenger{

 public:

  int flightNo;
  string lastName;
  string firstName;
  int seatNo;
  int getFlightNo();

  void Print();
  Passenger(int flightNo, string lastName,string firstName,int seatNo);
  //Passenger(const Passenger &);
  Passenger();
  RelationType ComparedTo(Passenger p) const;
  void Print(std::ofstream&)const;

};

#endif // PASSENGER_H

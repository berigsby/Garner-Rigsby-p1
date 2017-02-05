#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>

using namespace std;

enum RelationType{ LESS, GREATER, EQUAL};

class Passenger{
<<<<<<< HEAD
 public:
=======
  public:
>>>>>>> 9ed67c3bf870db88f88859cbbb7de93f79794851
  int flightNo;
  string lastName;
  string firstName;
  int seatNo;
  //int getFlightNo();
<<<<<<< HEAD
  // void Print();
  Passenger(int flightNo, string lastName,string firstName,int seatNo);
  Passenger();
  RelationType ComparedTo(Passenger p) const;
  void Print(std::ofstream&)const;
=======
  void Print();
  Passenger(int flightNo, string lastName,string firstName,int seatNo);
  Passenger();
  RelationType ComparedTo(Passenger p) const;
>>>>>>> 9ed67c3bf870db88f88859cbbb7de93f79794851
};

#endif // PASSENGER_H

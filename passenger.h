#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>

using namespace std;

struct passen {
  int flightNo;
  string lastName;
  string firstName;
  int seatNo;
}   pass [50];

class Passenger
{
 public:
  Passenger();
  void print(passen p);
  void Initializer(int flightNo, string lastName,string firstName,int seatNo);
    
 protected:
 private:
  int position;
};

#endif // PASSENGER_H

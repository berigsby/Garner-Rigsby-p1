#ifndef FLIGHT_H
#define FLIGHT_H
#include <string>
#include "Passenger.h"

using namespace std;

class Flight
{
 public:
  int maxPassenger; 
  Passenger *PassengerList;//=new passenger[maxPassenger];
  int currentPos;
  int flightNo;
  
  Flight(int maxPassenger, int flightNo);
  Flight();
  ~Flight();
  void MakeFlightEmpty();
  bool IsFlightFull() const;
  int GetNumPassengerInFlight() const;
  Passenger GetPassenger(Passenger passenger2, bool& found);
  void addPassenger(Passenger passenger);
  void removePassenger(Passenger passenger);
  void ResetList();
  Passenger GetNextPassenger();
  void showAllPassengers();

};

#endif //FLIGHT_H

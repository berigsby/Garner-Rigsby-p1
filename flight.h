#ifndef FLIGHT_H
#define FLIGHT_H
#include <string>
#include "passenger.h"

using namespace std;


class flight
{
  int maxPassenger; 
  passenger *passengerList=new passenger[maxPassenger];
  int currentPos;
  int flightNo;
  
  flight(int maxPassenger, int flightNo);
  void MakeFlightEmpty();
  bool IsFlightFull() const;
  int GetNumPassengerInFlight() const;
  passenger GetPassenger(passenger passenger2, bool& found);
  void addPassenger(passenger passenger);
  void removePassenger(passenger passenger);
  void ResetList();
  passenger GetNextPassenger();
  void showAllPassengers(flight passengerList);

};

#endif //FLIGHT_H

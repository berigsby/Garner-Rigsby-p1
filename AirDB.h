#ifndef AIRDB_H
#define AIRDB_H
#include <string>
#include "Flight.h"

using namespace std;

class AirDB{

 public:
  const int maxFlights=20;
  Flight **list;
  int currentPos;

  AirDB();
  ~AirDB();

  bool IsFlightFull() const;
  int GetNumFlight() const;
  Flight GetFlight(Flight flight2, bool& found);
  void addFlight(Flight * flight);
  void removeFlight(Flight flight);
  void ResetList();
  Flight GetNextFlight();
  void showAllFlights();
  void showAllFlightsAndPassengers();
};

#endif // AIRDB_H

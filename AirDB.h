#ifndef AIRDB_H
#define AIRDB_H
#include <string>
#include "Flight.h"

using namespace std;

class AirDB{
<<<<<<< HEAD
 public:
  const int maxFlights=20;
  Flight *list[20];
  int currentPos;// = 0;
  AirDB();
=======
  public:
  const int maxFlights;// = 20;
  Flight *list[20];//maxFlights];
  int currentPos;// = 0;

>>>>>>> 9ed67c3bf870db88f88859cbbb7de93f79794851
  bool IsFlightFull() const;
  int GetNumFlight() const;
  Flight GetFlight(Flight flight2, bool& found);
  void addFlight(Flight flight);
  void removeFlight(Flight flight);
  void ResetList();
  Flight GetNextFlight();
  void showAllFlights();
  void showAllFlightsAndPassengers();
};

#endif // AIRDB_H

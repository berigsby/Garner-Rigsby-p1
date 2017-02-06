/*
 * AirDB.h
 * Group Members: Ben Rigsby, Jalysa Garner
 * Submission Date: 2-6-17
 *
 * Purpose: Function prototypes
 *
 * Statement of Academic Honesty:
 *
 * The following code represents our own work. We have neither
 * received nor given inappropriate assistance. We have not copied
 * or modified code from any source other than the course webpage
 * or the course textbook. We recognize that any unauthorized
 * assistance or plagiarism will be handled in accordance with
 * the University of Georgia's Academic Honesty Policy and the
 * policies of this course. We recognize that my work is based
 * on an assignment created by the Department of Computer
 * Science at the University of Georgia. Any publishing
 * or posting of source code for this project is strictly
 * prohibited unless you have written consent from the Department
 * of Computer Science at the University of Georgia.
 */

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

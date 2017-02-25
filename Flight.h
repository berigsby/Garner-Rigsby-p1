/*
 * Flight.h
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

#ifndef FLIGHT_H
#define FLIGHT_H
#include <string>
#include "Passenger.h"

using namespace std;

struct Node2;

class Flight
{
 public:

  int maxPassenger; 
  Node2 * listData;
  Node2 * currentPos;
  int flightNo;
  int length;

  Flight();
  Flight(int maxPassenger, int flightNo);
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
struct Node2{
  Passenger passenger;
  Node2 * link;
};

#endif //FLIGHT_H

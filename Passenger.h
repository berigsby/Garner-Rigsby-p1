/*
 * Passenger.h
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

  Passenger();
  Passenger(int flightNo, string lastName,string firstName,int seatNo);
  RelationType ComparedTo(Passenger p) const;
  void Print(std::ofstream&)const;

};

#endif // PASSENGER_H

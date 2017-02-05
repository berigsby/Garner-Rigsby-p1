#include "Passenger.h"
#include "Flight.h"
#include <iostream>

using namespace std;

/*NEEDS WORK: for some reason, when I add more than two passengers it gives me a segement fault
I don't know why!!! Also when i use the removePassenger with two passenger objects it works
but not three or more*/

int main(){
  // cout <<"hello"<<endl;
  /*  passenger p;
  p.Initializer(1,"Garner","Jalysa",1);
  flight f(12,12);
  f.addPassenger(p);
  //f.showAllPassengers();
  passenger p1;
  p1.Initializer(12,"Rigsby","Ben",2);
  f.addPassenger(p1);
  f.showAllPassengers();
  cout<<"Is the flight full: "<<boolalpha<<f.IsFlightFull()<<endl;*/
  // flight f(12,12);
 Passenger p1(1,"Garner","Jalysa",1);
 Passenger p2(1,"Pass","Inger",2);
 Passenger p0(12,"Rigsby","Ben",2); 
 
 Flight f(12,12); 
 f.addPassenger(p0);
 f.addPassenger(p1);
 //f.addPassenger(p0);
 f.addPassenger(p2);
 f.removePassenger(p1);
 f.showAllPassengers();

 return 0;
}

#include "Passenger.h"
#include "Flight.h"
#include "AirDB.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
  string line;
  int seatNumber = 1;
  int flightNumber = 1;
  /*TASK ONE*/ 
 /************************************************************************************************/
 Flight f(50,1);
 Flight f2(50,2);
 Flight f3(50,3);
 Flight f4(50,4);
 Flight f5(50,5);

 cout <<"Flight f has 50 max passengers and flight No is 1"<<endl;
 cout <<"Flight f2 has 50 max passengers and flight No is 2"<<endl;
 cout <<"Flight f3 has 50 max passengers and flight No is 3"<<endl;
 cout <<"Flight f4 has 50 max passengers and flight No is 4"<<endl;
 cout <<"Flight f5 has 50 max passengers and flight No is 5"<<endl; 
 /************************************************************************************************/

 /*TASK TWO*/
 /************************************************************************************************/
 ifstream myfile("passengers.dat");
  if(myfile.is_open()){
    while(getline (myfile,line)){
      stringstream iss(line);
      string lastname;
      string firstname;
      iss >> lastname;
      iss >> firstname;
      flightNumber = 1;
      Passenger p(flightNumber,lastname,firstname,seatNumber);
      f.addPassenger(p);
      flightNumber++;
      lastname += "-Alt";
      
      Passenger p1(flightNumber,lastname,firstname,seatNumber);
      f2.addPassenger(p1);
      flightNumber++;
      lastname += "-Alt";

      Passenger p2(flightNumber,lastname,firstname,seatNumber);
      f3.addPassenger(p2);
      flightNumber++;
      lastname += "-Alt";

      Passenger p3(flightNumber,lastname,firstname,seatNumber);
      f4.addPassenger(p3);
      flightNumber++;
      lastname += "-Alt";

      Passenger p4(flightNumber,lastname,firstname,seatNumber);
      f5.addPassenger(p4);
      seatNumber ++;
      }//while
    myfile.close();
  }//if
  //f.showAllPassengers();
  /******************************************************************************/

  /*TASK THREE*/
  /******************************************************************************/
  if(f.IsFlightFull()== 1){
    cout<<"Flight "<<f.flightNo<<" is full"<<endl;
  }
  else{
    cout <<"Flight "<<f.flightNo<<"is not full"<<endl;
  }
  /*******************************************************************************/

  /*TASK FOUR*/
  Passenger r1(181,"Srinimukesh","Nachammai",181);
  Passenger r2(185,"Stone","Robert",185);
  Passenger r3(189,"Thomas","Melissa",189);
  Passenger r4(193,"Ton-kollie","Jeffery",193);
  Passenger r5(197,"Yox","Tyler",197);
  f.removePassenger(r1);
  f.removePassenger(r2);
  f.removePassenger(r3);
  f.removePassenger(r4);
  f.removePassenger(r5);

  /*163          Pollitt-Alt-Alt        Sean   163
167          Priest-Alt-Alt        Austin   167
171          @?V-Alt-Alt        Pradeep   171
175          Rigsby-Alt-Alt        Benjamin   175
179          Speight-Alt-Alt        Melvin   179
183          p?Vesh-Alt-Alt        Nachammai   183
187          Stone-Alt-Alt        Robert   187
191          Thomas-Alt-Alt        Melissa   191
195          ie-Alt-Alt        Jeffrey   195
199          Yox-Alt-Alt        Tyler   4016
  */

  AirDB listy;
  listy.addFlight(&f);
  listy.showAllFlightsAndPassengers();
  return 0;
}

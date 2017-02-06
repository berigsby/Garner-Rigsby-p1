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
  int number = 1;
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
      Passenger p(number,lastname,firstname,number);
      f.addPassenger(p);
      number++;
      lastname += "-Alt";
      
      Passenger p1(number,lastname,firstname,number);
      f2.addPassenger(p1);
      number++;
      lastname += "-Alt";

      Passenger p2(number,lastname,firstname,number);
      f3.addPassenger(p2);
      number++;
      lastname += "-Alt";

      Passenger p3(number,lastname,firstname,number);
      f4.addPassenger(p3);
      number++;
      lastname += "-Alt";

      Passenger p4(number,lastname,firstname,number);
      f5.addPassenger(p4);
      }//while
    myfile.close();
  }//if
  //f.showAllPassengers();
  /********************************************************************************/

  /*TASK THREE*/
  if(f.IsFlightFull()== 1){
    cout<<"Flight "<<f.flightNo<<" is full"<<endl;
  }


  /*TASK FOUR*/


  //Passenger p1(13,"Garner","Jalysa",13);
  //f.removePassenger(p1);
  AirDB listy;
  // listy.addFlight(f);
  listy.addFlight(f);
  //listy.showAllFlightsAndPassengers();
  //cout << listy.list[0]->PassengerList[0].flightNo <<endl;
   f.showAllPassengers();
  return 0;
}

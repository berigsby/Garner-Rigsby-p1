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
  cout << "TASK ONE" << endl;
 /*TASK ONE*/
 /************************************************************************************************/
 Flight f(50,1);
 Flight f2(50,2);
 Flight f3(50,3);
 Flight f4(50,4);
 Flight f5(50,5);

  AirDB flightList;
  flightList.addFlight(&f);
  flightList.addFlight(&f2);
  flightList.addFlight(&f3);
  flightList.addFlight(&f4);
  flightList.addFlight(&f5);

 /************************************************************************************************/

 cout << "TASK TWO" << endl;
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

  cout << "TASK THREE" << endl;
  /*TASK THREE*/
  /******************************************************************************/
  if(f.IsFlightFull()== 1){
    cout<<"Flight "<<f.flightNo<<" is full"<<endl;
  }
  else{
    cout <<"Flight "<<f.flightNo<<"is not full"<<endl;
  }
  /*******************************************************************************/

  cout << "TASK FOUR" << endl;
  /*TASK FOUR*/
  Passenger r1(1,"Srinimukesh","Nachammai",46);
  Passenger r2(1,"Stone","Robert",47);
  Passenger r3(1,"Thomas","Melissa",48);
  Passenger r4(1,"Ton-kollie","Jeffery",49);
  Passenger r5(1,"Yox","Tyler",50);
  f.removePassenger(r1);
  f.removePassenger(r2);
  f.removePassenger(r3);
  f.removePassenger(r4);
  f.removePassenger(r5);

  Passenger r6(3,"Pollitt-Alt-Alt","Sean",41);
  Passenger r7(3,"Priest-Alt-Alt","Austin",42);
  Passenger r8(3,"Ravindar-Alt-Alt","Pradeep",43);
  Passenger r9(3,"Rigsby-Alt-Alt","Benjamin",44);
  Passenger r10(3,"Speight-Alt-Alt","Melvin",45);
  Passenger r11(3,"Srinimukesh-Alt-Alt","Nachammai",46);
  Passenger r12(3,"Stone-Alt-Alt","Robert",47);
  Passenger r13(3,"Thomas-Alt-Alt","Melissa",48);
  Passenger r14(3,"Ton-kollie-Alt-Alt","Jeffery",49);
  Passenger r15(3,"Yox-Alt-Alt","Tyler",50);
  f3.removePassenger(r6);
  f3.removePassenger(r7);
  f3.removePassenger(r8);
  f3.removePassenger(r9);
  f3.removePassenger(r10);
  f3.removePassenger(r11);
  f3.removePassenger(r12);
  f3.removePassenger(r13);
  f3.removePassenger(r14);
  f3.removePassenger(r15);
  /*******************************************************************************/

  cout << "TASK FIVE" << endl;
  /*TASK FIVE*/
  Passenger r16(1,"Spencer","Sean",41);
  Passenger r17(1,"Savich","Austin",42);
  Passenger r18(1,"Pink","Pradeep",43);
  Passenger r19(3,"Falcons","Benjamin",44);
  Passenger r20(3,"Gaga","Melvin",45);
  Passenger r21(3,"Superbowl","Nachammai",46);
  Passenger r22(3,"Sunday","Robert",47);
  Passenger r23(3,"Bradey","Melissa",48);
  f.addPassenger(r16);
  f.addPassenger(r17);
  f.addPassenger(r18);
  f3.addPassenger(r19);
  f3.addPassenger(r20);
  f3.addPassenger(r21);
  f3.addPassenger(r22);
  f3.addPassenger(r23);
  /*******************************************************************************/

  cout << "TASK SIX" << endl;
  /*TASK SIX*/
  Passenger r24(3, "Bradey", "Melissa", 48);
  f3.removePassenger(r24);
  Passenger r25(3, "Bradey", "Melissa", 49);
  f3.addPassenger(r25);
  /*******************************************************************************/

  cout << "TASK SEVEN" << endl;
  /*TASK SEVEN*/
  f3.showAllPassengers();

  /*******************************************************************************/
  
  cout << "TASK EIGHT" << endl;
  /*TASK EIGHT*/
  flightList.removeFlight(f5);

  /*******************************************************************************/
  
  cout << "TASK NINE" << endl;
  /*TASK NINE*/
  cout << "Number of flights: " << flightList.GetNumFlight() << endl;
  flightList.showAllFlights();

  /*******************************************************************************/
  
  cout << "TASK TEN" << endl;
  /*TASK TEN*/
  Flight f6(50,6);
  flightList.addFlight(&f6);

  /*******************************************************************************/
  
  cout << "TASK ELEVEN" << endl;
  /*TASK ELEVEN*/
  ifstream myfile2("passengers.dat");
  if(myfile2.is_open()){
    seatNumber = 1;
    while(getline (myfile2,line)){
      stringstream iss(line);
      string lastname;
      string firstname;
      iss >> lastname;
      iss >> firstname;
      flightNumber = 6;
      lastname += "-New";
      Passenger newp(flightNumber,lastname,firstname,seatNumber);
      f6.addPassenger(newp);
      seatNumber ++;
      if( seatNumber == 26) break;
    }//while
    myfile2.close();
  }//if

  /*******************************************************************************/
  
  cout << "TASK TWELVE" << endl;
  /*TASK TWELVE*/
  flightList.removeFlight(f6);
  f6.flightNo = 7;
  for(int x = 0; x < 25; x++){
    f6.PassengerList[x].flightNo = 7;
  }//for

  flightList.addFlight(&f6);
  /*******************************************************************************/
  
  cout << "TASK THIRTEEN" << endl;
  /*TASK THIRTEEN*/ 
  flightList.showAllFlightsAndPassengers();


  //AirDB listy;
  //listy.addFlight(&f);
  //listy.showAllFlightsAndPassengers();

  return 0;
}

p1: AirDB.o Flight.o Passenger.o
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors AirDB.o Flight.o AirDB.h Flight.h Passenger.o Passenger.h -o p1

Flight.o: Flight.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c Flight.cpp

Passenger.o: Passenger.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c Passenger.cpp

AirDB.o: AirDB.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c AirDB.cpp

clean:
	rm *.o p1 *~
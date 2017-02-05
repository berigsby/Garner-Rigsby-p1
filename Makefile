p1: airDB.o Flight.o Passenger.o
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors airDB.o Flight.o Flight.h Passenger.o Passenger.h -o p1

Flight.o: Flight.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c Flight.cpp

Passenger.o: Passenger.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c Passenger.cpp

airDB.o: airDB.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c airDB.cpp

clean:
	rm *.o p1 *~
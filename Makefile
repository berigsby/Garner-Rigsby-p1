p1: airDB.o flight.o passenger.o
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors airDB.o flight.o flight.h passenger.o passenger.h -o p1

flight.o: flight.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c flight.cpp

passenger.o: passenger.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c passenger.cpp

airDB.o: airDB.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c airDB.cpp

clean:
	rm *.o p1 *~
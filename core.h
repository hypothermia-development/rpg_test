#include <iostream>
#include <cstdlib> 
#define RAND_MAX = 100
/*

Hypothermia Core V1

core.h is where many of the features lie such as

Tick System 

random numbers

other features

*/



// rand area

int get_srand_seed()
{
	int temp = rand();
	return temp;
}




//Tick system

void tick()
{
	std::cout << "Congrats!";
	while (true)
	{
		std::cout << "hello";
		_sleep(1000);

	}
	std::cout << "L, error code 3";
}

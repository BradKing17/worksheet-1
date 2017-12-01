// Worksheet1.1.cpp : Defines the entry point for the console application.
// Number Guessing Game

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

#define RAND_MAX 10


int main()

{
	std::srand(std::time(0)); 
	
	// Variables
	int guess = 0;
	int end = 0;
	char play_again = 'Y';

	while (play_again == 'Y' || play_again == 'y')
	{
		int generated_num = std::rand() % 10 + 1;

		std::cout << "Random value on [0 " << RAND_MAX << "]: \n ";
		std::cout << "Enter guess: ";
		std::cin >> guess;

		if (guess == generated_num)
		{
			std::cout << "Congrats you win \n\n";
			std::cout << "Do you want to play again (Y/N)? ";
			std::cin >> play_again;
		}
		else
		{
			std::cout << "The value was " << generated_num << "\n\n";
			std::cout << "Do you want to play again (Y/N)? ";
			std::cin >> play_again;
		}
	}
	return 0;
}


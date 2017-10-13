// Worksheet1.1.cpp : Defines the entry point for the console application.
// Number Guessing Game

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

#define RAND_MAX 10


int main()

{

	int guess = 0;

	int end;

	char playAgain = 'Y';

	while (playAgain == 'Y' || playAgain == 'y')

	{


		std::srand(std::time(0)); //use current time as seed for random generator

		int generatedNum = std::rand() % 10 + 1;

		std::cout << "Random value on [0 " << RAND_MAX << "]: \n ";


		std::cout << "Enter guess: ";

		std::cin >> guess;


		if (guess == generatedNum)

		{

			std::cout << "Congrats you win \n\n";

			std::cout << "Do you want to play again (Y/N)? ";

			std::cin >> playAgain;

		}

		else

		{

			std::cout << "The value was " << generatedNum << "\n\n";

			std::cout << "Do you want to play again (Y/N)? ";

			std::cin >> playAgain;

		}

	}

	return 0;

}


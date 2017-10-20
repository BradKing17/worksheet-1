// Worksheet1.2.cpp : Defines the entry point for the console application.
// Here goes the cube calculation program

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

int main()
{
	float width = 0;
	float height = 0;
	float length = 0;
	
	float volume = 0;
	float s_area = 0;

	float l_height = 0;
	float h_width = 0;
	float w_length = 0;

	char end = '\0';

	std::cout << "CUBOID BUILDING PROGRAM\n\n";
	
	std::cout << "Enter width: ";
	std::cin >> width;

	std::cout << "\nEnter height: ";
	std::cin >> height;

	std::cout << "\nEnter length: ";
	std::cin >> length;

	volume = width * height * length;

	l_height = (length * height) * 2;
	h_width = (height * width) * 2;
	w_length = (width * length) * 2;

	s_area = l_height + h_width + w_length;

	std::cout << "\nYour volume is: " << volume;
	std::cout << "\nYour surface area is: \n" << s_area;
	std::cin >> end;

    return 0;
}



#include "pch.h"
#include <iostream>
#include <iterator>
#include <vector>

typedef std::pair <std::vector <double>::iterator, std::vector <double>::iterator> points;

double key = 4;


int main()
{
	std::vector <double> mass = { 1, 2, 3, 5, 6 };
	points be(mass.begin(), mass.end());
	if (key > *(be.second - 1) || key < *(be.first)) {
		std::cout << "Nothing";
	}
	else
	{
		for (int i = 0; i < mass.size(); i++) {
			std::vector <double>::iterator midle = be.first + (be.second - be.first) / 2;
			if (*midle == key) {
				std::cout << "I find!";
				break;
			}
			if (be.second - be.first == 0) {
				std::cout << "Nothing";
			}
			if (key > *midle) {
				be.first = midle + 1;
				continue;
			}
			if (key < *midle) {
				be.second = midle - 1;
				continue;
			}
		}
	}
}
again, go to File > Open > Project and select the .sln file

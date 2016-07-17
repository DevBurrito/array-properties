/*
--------------------------------Created By @DebBurrito on XDA, and GitHub--------------------------------
ArrayProperties.cpp : Defines the entry point for the console application.
This program gives the mean, median, maximum, minimum and mode of a set of 10 numbers entered by the user.
*/

#include "stdafx.h"
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	cout << "This program gives the mean, median, maximum, minimum and mode of a set of 9 integers entered by the user." << endl;
	int numbers[9];
	const int numbersLength = 9;
	for (int i = 0; i < numbersLength; i++) { //stores numbers entered into array of 9 vals
		cout << "Please enter you next number: ";
		cin >> numbers[i];
	}
	sort(numbers, numbers + numbersLength); //sorts from least to greatest
	int total = 0;
	for (int i = 0; i < numbersLength; i++) { //calculates total of array
		total += numbers[i];
	}
	int mean = total / numbersLength;
	int maximum = 0;
	for (int i = 0; i < numbersLength; i++) { //calculates max, this val will be used to calc min as well
		if (numbers[i] >= maximum) { //this allows recurring checks of whether the val is indeed greatest
			maximum = numbers[i];
		}
	}
	int minimum = maximum;
	for (int i = 0; i < numbersLength; i++) { //calculates min using a flipped aroung version of the logic used to calc max
		if (numbers[i] <= minimum) {
			minimum = numbers[i];
		}
	}
	int median = numbers[((numbersLength + 1) / 2) - 1];
	cout << "9 integers have been entered" << endl; //gives users the info!!
	cout << "Mean of set: " << mean << endl;
	cout << "Median of set: " << median << endl;
	cout << "Maximum of set: " << maximum << endl;
	cout << "Minimum of set: " << minimum << endl;
	cout << "\nPress enter to exit. . ." << endl;
	cin.ignore();
	cin.get();
	return 0;
}


/*
--------------------------------Created By @DevBurrito on XDA, and GitHub--------------------------------
ArrayProperties.cpp : Defines the entry point for the console application.
This program gives the mean, median, maximum, minimum and mode of a set of 10 numbers entered by the user.
*/

#include "stdafx.h"
#include <iostream>
#include <algorithm>

using namespace std;
//Prototypes of functions
void arraySums();
void arrayProps();

int main() {
	int userChoice;
	bool completed = false;

	cout << "You have 2 choices: \n1) Enter 2 arrays, each with 9 terms and the corresponding terms will be added \n2) Enter a 9 digit array, and basic properties will be printed \n\nEnter 1 or 2 to select choice: ";
	cin >> userChoice;
	if (userChoice == 1) {
		arraySums();
	}
	if (userChoice == 2) {
		arrayProps();
	}
	
	cout << "Thanks for using. Fork me on GitHub!\nPress enter to exit. . ." << endl;
	cin.ignore();
	cin.get();
}

void arraySums() {
	cout << "This part of the program allows the user to enter two arrays and view sums of corresponding terms." << endl;
	int numbersFirst[9];
	int numbersSecond[9];
	int sumValPrint;
	const int numbersLength = 9;
	for (int i = 0; i < numbersLength; i++) { //stores numbers entered into array of 9 vals
		cout << "Please enter you next number: ";
		cin >> numbersFirst[i];
	}
	cout << "congrats u entered ur first array!" << endl;
	for (int i = 0; i < numbersLength; i++) { //stores numbers entered into array of 9 vals
		cout << "Please enter you next number: ";
		cin >> numbersSecond[i];
	}
	for (int i = 0; i < numbersLength; i++) { //stores numbers entered into array of 9 vals
		sumValPrint = numbersFirst[i] + numbersSecond[i];
		int term = i + 1;
		cout << "The sum of the " << term << " of the the sequence is: " << sumValPrint << endl;
	}
}
void arrayProps() {
	cout << "\nThis part of the program gives the mean, median, maximum, minimum and mode of a set of 9 integers entered by the user." << endl;
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
	for (int i = 0; i < numbersLength; i++) {
		cout << numbers[i];
	}
	cout << "Mean of set: " << mean << endl;
	cout << "Median of set: " << median << endl;
	cout << "Maximum of set: " << maximum << endl;
	cout << "Minimum of set: " << minimum << endl;
	cout << "\nPress enter to exit. . ." << endl;
}


/*
--------------------------------Created By @DevBurrito on XDA, and GitHub--------------------------------
ArrayProperties.cpp : Defines the entry point for the console application.
This program gives the mean, median, maximum, minimum and mode of a set of 10 numbers entered by the user.
*/

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
//Prototypes of functions
void arraySums();
void arrayProps();

int main() {
	int userChoice;
	bool completed = false;

	cout << "You have 2 choices: \n1) Enter 2 arrays, and the corresponding terms will be added \n2) Enter an array, and basic properties will be printed \n\nEnter 1 or 2 to select choice: ";
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
	int arrLength;
	cout << "This part of the program allows the user to enter two arrays and view sums of corresponding terms." << endl;
	cout << "How long do you want your arrays to be (enter an integer)? ";
	cin >> arrLength;
	vector<int> arrOne(arrLength);
	vector<int> arrTwo(arrLength);
	int sumValPrint;
	const int numbersLength = 9;
	for (int i = 0; i < arrLength; i++) { //stores numbers entered into array of 9 vals
		cout << "Please enter you next number: ";
		cin >> arrOne[i];
	}
	cout << "congrats u entered ur first array!" << endl;
	for (int i = 0; i < arrLength; i++) { //stores numbers entered into array of 9 vals
		cout << "Please enter you next number: ";
		cin >> arrTwo[i];
	}
	cout << "\nYour arrays are: \n" << endl;
	for (int i = 0; i < arrLength; i++) {
		cout << arrOne[i] << " ";
	}
	cout << "\n" << endl;
	for (int i = 0; i < arrLength; i++) {
		cout << arrTwo[i] << " ";
	}
	cout << "\n" << endl;
	for (int i = 0; i < arrLength; i++) { //stores numbers entered into array of 9 vals
		sumValPrint = arrOne[i] + arrTwo[i];
		int term = i + 1;
		cout << "The sum of the " << term << " of the the sequence is: " << sumValPrint << endl;
	}
}
void arrayProps() {
	int numbersLength;
	cout << "This part of the program allows the user to enter one array and view the basic properties of it." << endl;
	cout << "How long do you want your array to be (enter an integer)? ";
	cin >> numbersLength;
	vector<int> numbers(numbersLength);
	for (int i = 0; i < numbersLength; i++) { //stores numbers entered into array of 9 vals
		cout << "Please enter you next number: ";
		cin >> numbers[i];
	}
	sort(numbers.begin(), numbers.end()); //sorts from least to greatest
	int total = 0;
	for (int i = 0; i < numbersLength; i++) { //calculates total of array
		total += numbers[i];
	}
	int mean = total / numbersLength;
	int maximum = numbers[0];
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
	cout << numbersLength << " integers have been entered\n" << endl; //gives users the info!!
	cout << "\nYour array is: \n" << endl;
	for (int i = 0; i < numbersLength; i++) {
		cout << numbers[i] << " ";
	}

	cout << "\n\nTotal of set: " << total << endl;
	cout << "Mean of set: " << mean << endl;
	cout << "Median of set: " << median << endl;
	cout << "Maximum of set: " << maximum << endl;
	cout << "Minimum of set: " << minimum << endl;
}


// ConsoleApplication3.cpp : This file contains the 'main' function.
//

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <ctime>	

using namespace std;
using std::cout;
using std::cin;

int main()
{
	cout << "Welcome to the loto max lottery!" << endl;
	cout << endl;
	string first_name;
	cout << "Enter first name: ";
	// cin.ignore();
	getline(cin, first_name);
	cout << endl;
	string last_name;
	cout << "Enter last name: ";
	//cin.ignore();
	getline(cin, last_name);
	cout << endl;
	// use time() to get an int value
	int elapsed_seconds = time(nullptr);
	// seed the random number generator
	srand(elapsed_seconds);
	// roll the first die
	int die1 = rand() % 49; // die1 is >= 0 and < 49
	die1 = die1 + 1; // die1 is >= 1 and <= 49
	// roll the second die
	int die2 = rand() % 49; // die2 is >= 0 and < 49
	die2 = die2 + 1; // die2 is >= 1 and <= 49
	// roll the third die
	int die3 = rand() % 49; // die3 is >= 0 and < 49
	die3 = die3 + 1; // die3 is >= 1 and <= 49
	// roll the fourth die
	int die4 = rand() % 49; // die4 is >= 0 and < 49
	die4 = die4 + 1; // die4 is >= 1 and <= 49
	// roll the fifth die
	int die5 = rand() % 49;
	die5 = die5 + 1;
	// roll the sixth die
	int die6 = rand() % 49;
	die6 = die6 + 1;
	// roll the seventh die
	int die7 = rand() % 49; 
	die7 = die7 + 1;
	int die_bonus = rand() % 49;
	die_bonus = die_bonus + 1;
	// write output to console
	cout << "Your roll: " << die1 << " " << die2 << " " << die3 << " " << die4 << " "
		<< die5 << " " << die6 << " " << die7 << endl; 
	cout << endl;
	cout << "Bonus number: " << die_bonus << endl;
	cout << endl; 
	cout << "Thank You: " << first_name << " " << last_name << " for playing!" ;
	cout << endl;
}
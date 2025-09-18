// Week3.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	srand(time(0)); //rand
	int pickedNumber;
	cout << "Please pick one or two, one is lottery app two is a dice app: "; // first sorter
	cin >> pickedNumber;
	while (!(pickedNumber == 1 || pickedNumber == 2)) {
		cout << "Invalid Number! Please choose 1 or 2: ";
		cin >> pickedNumber;
	}
	cout << endl;
	if (pickedNumber == 1)
	{

		cout << "Welcome to the loto max lottery!" << endl;
		cout << endl;
		string first_name;
		cout << "Enter first name: ";

		getline(cin, first_name);
		cout << endl;
		string last_name;
		cout << "Enter last name: ";

		getline(cin, last_name);
		cout << endl;
		// use time() to get an int value
		int elapsed_seconds = time(nullptr);
		// seed the random number generator
		srand(elapsed_seconds);
		// roll the dice
		int die1 = rand() % 49; // die1 is >= 0 and < 49
		die1 = die1 + 1; // die1 is >= 1 and <= 49
		int die2 = rand() % 49; 
		die2 = die2 + 1; 
		int die3 = rand() % 49; 
		die3 = die3 + 1; 
		int die4 = rand() % 49; 
		die4 = die4 + 1; 
		int die5 = rand() % 49;
		die5 = die5 + 1;
		int die6 = rand() % 49;
		die6 = die6 + 1;
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
		cout << "Thank You: " << first_name << " " << last_name << " for playing!";
		cout << endl;
	}
	else if (pickedNumber == 2)
	{
		int num1;
		int num2;

		// ask the user for a number 
		cout << "Please enter the first number between 1 and 6: ";
		cin >> num1;
		cout << endl;
		//validator1
		while ( num1 < 1 || num1 > 6) {
			cout << "Invalid Number! Please a number between 1 and 6: ";
			cin >> num1;
			cout << endl;
		}
		cout << "Please enter the second number between 1 and 6: ";
		cin >> num2;
		cout << endl;
		//validator1
		while (num2 < 1 || num2 > 6) {
			cout << "Invalid Number! Please a number between 1 and 6: ";
			cin >> num2;
			cout << endl;
		}
		//show the data
		cout << "Your numbers are: " << num1 << " and " << num2 << ".";
		//get random nums
		int num3 = rand() % 6;
		num3 = num3 + 1;
		int num4 = rand() % 6;
		num4 = num4 + 1;
		cout << "The random numbers are: " << num3 << " and " << num4 << ".";
		
		//checker
		if ((num1 == num3 && num2 ==num4) || (num1 == num4 && num2 == num3)) {
			cout << endl;
			cout << "You are a winner!";
			cout << endl;
		}
		else {
			cout << endl;
			cout << "You lose, so sorry!";
			cout << endl;
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

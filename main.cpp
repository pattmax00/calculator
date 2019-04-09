// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include "pch.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
	bool running = true;
	do {
		float x;
		float y;
		float z;
		string method;
		cout << "Addition(a), Subtraction(s), Multipilication(m), Division(d), or Quit(q)?"; //Prompts user
		cin >> method; //Sets method to either Addition(a), Subtraction(s), Multipilication(m), or Division(d)
		if (method == "a") {
			cout << "Enter both numbers\n";
			cin >> x;
			cin >> y;
			z = x + y;
			cout << "Answer: ";
			cout << z << "\n";
		}
		else if (method == "s") {
			cout << "Enter both numbers\n";
			cin >> x;
			cin >> y;
			z = x - y;
			cout << "Answer: ";
			cout << z << "\n";
		}

		else if (method == "m") {
			cout << "Enter both numbers\n";
			cin >> x;
			cin >> y;
			z = x * y;
			cout << "Answer: ";
			cout << z << "\n";
		}

		else if (method == "d") {
			cout << "Enter both numbers\n";
			cin >> x;
			cin >> y;
			z = x / y;
			cout << "Answer: ";
			cout << z << "\n";
		}

		else if (method == "q") {
			running = false;
		}

		else {
			cout << "Please only enter ""a"",""s"",""m"",""d"", or ""q"".\n";
		}

	} while (running == true);
	return 0;
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
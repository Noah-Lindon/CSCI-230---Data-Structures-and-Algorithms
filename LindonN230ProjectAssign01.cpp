/* This program demonstrates a user-controlled for loop.
/ Noah Lindon
/ CSCI 230
/ 8-29-19
*/
#include <iostream>
using namespace std;

int main()
{
	int minNumber, // Starting number to square
		maxNumber; // Maximum number to square
	char answer; // answer to whether the user wants to square another pair of numbers
	// Get the minimum and maximum values to display.
	cout << "I will display a table of numbers and their squares.\n"
		 << "Enter the starting number: ";
	cin >> minNumber;
	cout << "Enter the ending number: ";
	cin >> maxNumber;

	// Display the table.
	cout << "Number Squared\n"
		 << "-------------------------\n";

	for (int num = minNumber; num <= maxNumber; num++)
		cout << num << "\t\t" << (num * num) << endl;
	// below asks the user if they want to square more numbers
	cout << "Would you like to square another pair of numbers? Please answer y or n.";
		cin >> answer;
		// below will keep running the square program until the user inputs "n"
		while (answer == 'y' || answer == 'Y')
		{
			cout << "Enter the starting number: ";
			cin >> minNumber;
			cout << "Enter the ending number: ";
			cin >> maxNumber;

			// Display the table.
			cout << "Number Squared\n"
				<< "-------------------------\n";

			for (int num = minNumber; num <= maxNumber; num++)
				cout << num << "\t\t" << (num * num) << endl;

			cout << "Would you like to square another pair of numbers? Please answer y or n.";
			cin >> answer;
		  }

	system("Pause");
	return 0;
}
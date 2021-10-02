// This program demonstrates the Ackermann function
// Noah Lindon
// CSCI 270
// 11/13/19
#include <iostream>
using namespace std;

//function protype
int A(int, int);
int main()
{
	// m and n are the inputs for the Ackermann function
	int m, n;
	// i and j are the counters for the for loop
	int i, j;
	
	// first loop that goes from 0 to 3
	for (i = 0; i <= 3; i++)
	{
		// internal loop that goes from 0 to 5
		for (j = 0; j <= 5; j++)
		{
			cout << "The value for A(" << i << "," << j << ") is " << A(i, j) << endl;
		}
	}

	system("pause");
	return 0;
}

// Ackermann function
int A(int m, int n)
{
	if (m == 0)
	{
		return n + 1;
	}
	else if (n == 0)
	{
		return A(m - 1, 1);
	}
	else
	{
		return A(m - 1, A(m, n - 1));
	}
}
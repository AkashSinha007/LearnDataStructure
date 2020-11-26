
// C++ program to How will you print
// numbers from 1 to N without using loop?
#include <iostream>
using namespace std;

class PrintNumbers
{

	// Prints numbers from 1 to n
public:
	void printNos(unsigned int n)
	{
		if (n > 0)
		{
			printNos(n - 1);
			cout << n << " ";
		}
		return;
	}
};

// Driver code
int main()
{
	PrintNumbers p;
	int endNumber = 0;
	cout << "\nPlease enter number to end: ";
	cin >> endNumber;
	p.printNos(endNumber);
	return 0;
}

/*
Output:
Please enter number to end: 10
1 2 3 4 5 6 7 8 9 10 
*/

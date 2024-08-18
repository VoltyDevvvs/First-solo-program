#include <iostream>
#include <string>
using namespace std;

string myString = "Hello! In this program i will run 2 different numbers. The goal is to see how many itearions of this 'While loop' take for the lower number to become the larger number. Lower number will be increased by 2, while the bigger number gets increased by 1! I chose the numbers 3 and 10! Enjoy!";
int a = 3;
int b = 10;
int iterations = 1;

int main()
{
	cout << myString << endl;
	cout << endl;

	while (a <= b)
	{

		if (iterations == 1)
		{
			cout << "This is the " << iterations << "st" << " iteration!" << endl;
		}

		else if (iterations == 2)
		{
			cout << "This is the " << iterations << "nd" << " iteration!" << endl;
		}

		else if (iterations == 3)
		{
			cout << "This is the " << iterations << "rd" << " iteration!" << endl;
		}

		else
		{
			cout << "This is the " << iterations << "th" << " iteration!" << endl;
		}

		cout << " Number a is " << a << endl;
		cout << " Number b is " << b << endl;
		cout << " Number a is still not bigger than number b!" << endl;
		cout << endl;

		iterations += 1;
		a += 2;
		b += 1;

		if (a > b)
		{
			cout << "Finally, after " << iterations << "th" << " iteration, a is larger than b!" << endl;
			cout << "Now, the value of number a is " << a << "!" << endl;
			cout << "While the value of number b is " << b << "!" << endl;
			cout << endl;
			cout << "That's it for this program, thank you for your attention!";
			cout << endl;
			cout << endl;
		}
	}
}
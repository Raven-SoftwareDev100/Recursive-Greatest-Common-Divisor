// Recursive Greatest Common Divisor Program
#include <iostream>
using namespace std;

int gcd(int, int); // FN declaration

int main()
{
	int x, y; // Variable declaration

	cout << "Enter two positive integers seperated by a space: ";
	cin >> x >> y; // Takes user input for x + y

	cout << "Greatest common divisor of " << x << " and " << y << " is " << gcd(x, y) << endl; // Result is calculated using gcd() function and then printed
}


int gcd(int x, int y) // Recursive function
{
	if (y == 0)
		return x;
	else
		return gcd(y, x % y); // Recursive call to gcd
}
// Mahala Covey
// CIS 1202 800
// March 5, 2024

#include <iostream>
#include <iomanip>
using namespace std;

//************************************************************************************************************
// The average function sums three integers and divides the sum by three. The result is returned as a float. *
// Parentheses now surround the sum to account for the initial logic error and it is type cast to a float to *
// account for a value in the first decimal place.															 *
//************************************************************************************************************

float average(int i1, int i2, int i3)
{
	return static_cast<float>(i1 + i2 + i3) / 3;
}

int main()
{
	int n1 =0 , n2 = 0, n3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n3; // n3 is now assiged to the third number instead of n2

	float a = average(n1, n2, n3);

	cout << setprecision(1) << fixed << "The average is " << a << endl;

	return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	// int n1 = 25, n2 = 32, sum;

	// int n1, n2, sum;

/*

	cout << "Enter Number 1 : ";
	cin >> n1;

	cout << "Enter Number 2 : ";
	cin >> n2;

*/

	float n1, n2, n3, sum;

	cout << "Enter 3 numbers: ";

	cin >> n1 >> n2 >> n3;

	sum = n1 + n2 + n3;

	cout << "Sum is : " << sum << endl;

	
// setw (n)  - specify number os spaces used to display a number

// setprecision (n) - determines the number of digits to be printed in a floating point number

// setiosflags (ios::fixed) - determines the number of decimal places to be printed in a floating point number

	cout << setw (15) << 25.695789 << endl;
	cout << setw (14) << setprecision (5) << 25.695789 << endl;
	cout << setw (13) << setiosflags (ios::fixed) << setprecision (5) << 25.695789 << endl;
	
	cout << setiosflags (ios::fixed) << setprecision (2) << sum << endl;


	// selection control structure

	if ( n1 > n2 )
		cout << n1 << " is greater than " << n2 << endl;

	else if ( n2 > n1 )
		cout << n2 << " is greater than " << n1 << endl;

	else
		cout << n1 << " is equal to " << n2 << endl;

	
	// largest number

	if ( n1 > n2 && n1 > n3 )
		cout << "The largest number is " << n1 << endl;

	else if ( n2 > n3 )
		cout << "The largest number is " << n2 << endl;

	else 
		cout << "The largest number is " << n3 << endl;

	
	// smallest number

	if ( n1 < n2 && n1 < n3 )
		cout << "The smallest number is " << n1 << endl;

	else if ( n2 < n3 ) 
		cout << "The smallest number is " << n2 << endl;

	else 
		cout << "The smallest number is " << n3 << endl;



	return 0;
}
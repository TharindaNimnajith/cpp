#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
	int count = 1;

	while ( count <= 10 ) {
		cout << count << endl;
		count++;
	}


	cout << endl;


	int c;

	for ( c = 1; c <= 10; c++ ) {
		cout << c << endl;
	}


	printf( "\n" );
		

	int C = 1;

	do {
	
		cout << C << endl;	
		C++;	
	
	} while ( C <= 10 );	

	std::cout << std::endl;
	cout << endl;
	printf( "\n" );
	puts ( "" );
	puts ( " \n\n" );


	int counter, num, even = 0, odd = 0; 

	for ( counter = 1; counter <= 10; counter++ ) {

		cout << "Enter number " << counter << " : ";
		cin >> num;
		  	
		if ( num % 2 == 0 )
			even++;
		
		else		
			odd++;

	}
	
	cout << "Number of even numbers : " << even << endl;
	cout << "Number of odd numbers: " << odd <<endl;

	return 0;
}
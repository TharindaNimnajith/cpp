#include <iostream>


using namespace std;



int area(int length, int width);



int main() 
{
    
	int rectangle1Width, rectangle1Length;
    
	int rectangle2Width, rectangle2Length;

    

	rectangle1Width = 30;
    
	rectangle1Length = 100;

    

	rectangle2Width = 20;
    
	rectangle2Length = 50;
    
    

	int rectangle1Area = area(rectangle1Width, rectangle1Length);
    

	int rectangle2Area = area(rectangle2Width, rectangle2Length);

    

	int total = rectangle1Area + rectangle2Area;

    

	cout << "Area is " << total << endl;


	return 0;

}



int area(int length, int width) 
{

	return length * width;

}
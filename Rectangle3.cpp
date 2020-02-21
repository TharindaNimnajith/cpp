#include <iostream>


using namespace std;



int area (int length, int width);



struct Rectangle {

    
	int length;
    
	int width;


};



int main() 
{
    
	Rectangle a, b;
    
    

	a.width = 30;
    
	a.length = 100;

    

	b.width = 20;
    
	b.length = 50;
    
    

	int rectangle1Area = area(a.width, a.length);
    
	
	int rectangle2Area = area(b.width, b.length);

    

	int total = rectangle1Area + rectangle2Area;

    

	cout << "Area is " << total << endl;


	return 0;
}



int area (int length, int width) 
{
    
	return length * width;

}
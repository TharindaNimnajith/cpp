#include <iostream>


using namespace std;



class Rectangle {
    

	public:
       
		int width;
       
		int length;
    

	public:
      
		int area();


};




int Rectangle::area() 
{
    
	return length * width;

}




int main() 
{

	Rectangle a,b;
    
	
	a.width = 30;
    
	a.length = 100;
    

	b.width = 20;
    
	b.length = 50;
    

	int total = a.area() + b.area();

    

	cout << "Area is " << total << endl;

	return 0;	

}
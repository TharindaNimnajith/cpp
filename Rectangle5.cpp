#include <iostream>


using namespace std;



class Rectangle {
    
	
	private:
       
		int width;
       
		int length;
    

	public:
       
		void setWidth(int w);
       
		void setLength(int l);
       
		int area();
	

};



void Rectangle::setWidth(int w) 
{	
    
	if (w > 0)

		width = w;
    

	else
       
		width = 10;
}	



void Rectangle::setLength(int l) 
{
    
	if (l > 0)
       
		length = l;
    

	else
       
		length = 10;

}



int Rectangle::area() 
{
    
	return length * width;

}




int main() 
{
    
	Rectangle a,b;
    

	a.setWidth(30);
    
	a.setLength(100);
    

	b.setWidth(20);
    
	b.setLength(50);
    

	int total = a.area() + b.area();

    

	cout << "Area is " << total << endl;


	return 0;
}
// Reference Type Variables Sample
// In C++ we can use reference type 
// variables to refer to another variable
// We will see an application of this in Tutorial 3 - Question d

#include <iostream>
using namespace std;
int main() {
   int no; // normal integer Variables
   // val is a int reference Type
   // variable that refers to no
   // In otherwords val is an alias
   // to no. 
   // Both val and no are the Sample

   int &val = no;  
   // we can also write this as
   // int& val = no;
   // int & val = no;

   no = 10;
   cout << "no = " << no 
        << ", val = " << val << endl;

   val = 20;

   cout << "no = " << no 
        << ", val = " << val << endl;

   return 0;

}
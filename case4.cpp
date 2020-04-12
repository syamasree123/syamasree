/*Program: Acess Specifiers
filename:case4.cpp
date:10-04-2020
Author:syamasree
*/
#include<iostream>
using namespace std ;
    // base class
class base
 {
	// Private members
	int iAdd ;
	
	public:
		// Public members
		int  add (int iN1, int iN2)
		{
			iAdd= iN1+ iN2 ;
			cout<< "Add: " << iAdd <<endl  ;
		}
	protected:
		//Protected members
		int iSub ;
 };
 // derived class
 class derived : private base
 {
 	public:
 		// Public members
 
 		int sub(int iNum1, int iNum2)
		{
 			iSub= iNum1 - iNum2 ;
			cout<< "sub: " << iSub <<endl  ;
		}
 };
 
int main(int argc, char* argv[])
{
	// condition for arguments to dispaly -h file
    if (argc == 2)
    {
        cout << "\\usage of the program:\\" << endl << " Access Specifiers " << endl;
        cout << " "<< endl ;
    }
    
    else
    {
    // creating object for classes
 	base obj ;
 	derived obj1 ;
	obj.add (3.2, 10.5) ;
 	obj1.sub (20.2, 6.3) ;
 	}
}

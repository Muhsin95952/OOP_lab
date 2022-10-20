#include <iostream>
#include <math.h>
#define l cout<<endl;
using namespace std;
 
class Complex{
	private:   									 //access specifier
		double re, img;   						 //class data members
	public:
											 	// constructor  , special funtion OOP
		Complex(){
			cout<<"I am inside in constructor"<<endl;
			re = 0.0;
			img = 0.0;
		}
		
		Complex(double r, double i){       		   // overloaded constructor
			cout<<"2nd constructor"<<endl;
			re = r;
			img = i;
		}
	                                          		// constructor have no need to call it will call by itself
	                                           		// while function need to call for exicution
		void getcomplex(double r, double i){
			re = r;
			img = i;	
		}
		void show_complex(){
			cout<<"Z = "<<re<<" + "<<img<<"i"<<endl;
				//it will show 2 + 3i, etc complex number
		}
};

int main(){
	Complex Z1, Z2, Z3;
	Z1.show_complex();
	Z1.getcomplex(2, -3);
		Z1.show_complex();
		
	Z2.getcomplex(0, 3);
	Z2.show_complex();
	
	Z3.getcomplex(1, 1);
	Z3.show_complex();
	
	Complex c2(-10, 33);
	c2.show_complex();
	
	return 0;
}

#include <iostream>
using namespace std;

class Complex{
    private:
        double re, img;
    public:
                            // functions prototype
        Complex();
        Complex(double r, double i);
        void showComplex();
                           // two important functions
        void addcomplex(Complex c1, Complex c2);                   
    	Complex negcomplex();
    	
    	void subcomplex(Complex c3, Complex c4);
    	Complex conjugate();
    	
    	
};

// function deffinition goes out of the class

Complex::Complex(){
    re = 0.0;
    img = 0.0;
}

Complex::Complex(double r, double i){
    re = r;
    img = i;
}

void Complex::showComplex(){
	if (img>0)
    cout<<re<<"+"<<img<<"i"<<endl;
    else 
    cout<<re<<img<<"i"<<endl;
}


void Complex::addcomplex(Complex c1,Complex c2){
	re = c1.re + c2.re;
	img = c1.img + c2.img;
}

Complex Complex::negcomplex(){
	Complex temp;
	temp.re  = -re;
	temp.img = -img;
	return temp;
}void Complex::subcomplex(Complex c3, Complex c4){
	re = c3.re - c4.re;
	img = c3.img - c4.img;
}
 Complex Complex::conjugate(){
 	Complex ordi;
 	ordi.re = +re;
 	ordi.img = -img;
 	return ordi;
 }


int main(){
    Complex c1(2, 4), c2(0.5, 6.2), c;
        c1.showComplex();
        c2.showComplex();
        c.addcomplex(c1, c2);
        c.showComplex();
        Complex result;
        result = c1.negcomplex();
        result.showComplex();
        
        cout<<"lab activity"<<endl;
        Complex c3(5, 7), c4(8, 9), as;
        as.subcomplex(c3, c4);
        as.showComplex();
        Complex show;
        show = c3.conjugate();
        show.showComplex();
        
        
    return 0;    
}





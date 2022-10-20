#include <iostream>
using namespace std;

class Complex{
	private:
		double re;
		double img;
	public:
		Complex();
		Complex(double r, double i);
		void input();
		void add_Com(Complex c1, Complex c2);
		void sub_Com(Complex c1, Complex c2);
		void mul_Com(Complex c1, Complex c2);
		void show_Com();
};

Complex::Complex(){
	re = 0.0;
	img = 0.0;
}
Complex::Complex(double r, double i){
	re = r;
	img = i;
}

void Complex::input(){
	cin>>re;
	cin>>img;
		
}

void Complex::add_Com(Complex c1, Complex c2){
	re = c1.re + c2.re;
	img = c1.img + c2.img;
}

void Complex::sub_Com(Complex c1, Complex c2){
	re = c1.re - c2.re;
	img = c1.img - c2.img;
}

void Complex::mul_Com(Complex c1, Complex c2){
	re = (c1.re*c2.re) - (c1.img*c2.img);
	img = (c1.re*c2.img) + (c2.re*c1.img);
}

void Complex::show_Com(){
	if(img>=0)
		cout<<re<<"+"<<img<<"i"<<endl;
	else
		cout<<re<<img<<"i"<<endl;
}

int main(){
	Complex v, w, x, y, z;
	v.input();
	w.input();
	v.show_Com();
	w.show_Com();
	x.add_Com(v, w);
	x.show_Com();
	y.sub_Com(v, w);
	y.show_Com();
	z.mul_Com(v, w);
	z.show_Com();
	
}













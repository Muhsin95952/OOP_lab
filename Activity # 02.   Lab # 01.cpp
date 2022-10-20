#include <iostream>
using namespace std;

class point{
	private:
		int x;
		int y;
	public:
		point()
			{
				x = 0;
				y = 0;
			}
		point(int a, int b)
		{
			x = a;
			y = b;
		}
	void setX(int a)
		{
			x = a;
		}	
	void setY(int b)
		{
			y = b;
		}
	int getX()
		{
			return x;	
		}
	int getY()
		{
			return y;
		}
	void display()
		{
			cout<<"("<<getX()<<","<<getY()<<")"<<endl;
		}	
};

int main()
	{
		point p1, p2(5,2);
 		cout<<"Origirnal p1: ";
 		p1.display();
 		p1.setX(2);
 		p1.setY(3);
 		cout<<"Updated p1: ";
 		p1.display();
 	 
 		cout<<"Original p2: ";
		p2.display();
		p2.setX(6);
		p2.setY(3);
		cout<<"Updated p2: ";
		p2.display();  
	return 0;
	}

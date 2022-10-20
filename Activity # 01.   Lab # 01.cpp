#include <iostream>
using namespace std;

class Heater{
	private:
		int temperature;
	public:
		Heater(){
			temperature = 15;
		}
	void warmer(){
		temperature = temperature + 5;
	}	
	void cooler(){
		temperature = temperature - 5;
	}
	void show_temp(){
		cout<<"Temperature = "<<temperature<<endl;
		
	}
		
};
int main(){
	Heater room1, room2;
	cout<<"For object 1:"<<endl;
	room1.show_temp();
	room1.warmer();
	room1.show_temp();
	room1.cooler();
	room1.show_temp();
	cout<<"For object 2"<<endl;
	room2.show_temp();
	room2.cooler();
	room2.cooler();
	room2.cooler();
	room2.show_temp();
	room2.warmer();
	room2.show_temp();
}

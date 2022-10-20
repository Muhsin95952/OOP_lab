#include <iostream>
using namespace std;

class bank_account{
	private:
		int balance;
	public:
		bank_account(){
			balance = 1000;
		}
	void deposit(){
		balance = balance + 500;
	}	
	void withdraw(){
		if (balance <= 500){
			cout<<"Insufficient balance...."<<endl;
		}
		else 
			balance = balance - 500;
		
	}
	void show_balance(){
		cout<<"Current balance = "<<balance<<endl;
	}
};
int main(){
	bank_account user1;
	user1.show_balance();
	user1.deposit();
	user1.show_balance();
	user1.withdraw();
	user1.show_balance();
	user1.withdraw(); 
	user1.show_balance();
	user1.withdraw();
	user1.show_balance();
}

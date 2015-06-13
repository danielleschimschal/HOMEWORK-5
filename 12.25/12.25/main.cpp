#include "Header.h"
#include <string>
using namespace std;

int main()
{
	Account Account1;
	Account1.set_name("George");
	Account1.set_id(1122);
	Account1.set_balance(1000);
	Account1.set_annualInterestRate(1.5);
	Account1.deposit(30);
	Account1.deposit(40);
	Account1.deposit(50);
	Account1.withdraw(5);
	Account1.withdraw(4);
	Account1.withdraw(2);


	cout << "Name:" << Account1.getname() << ", Balance $" << Account1.getbalance() << " Monthly Interest " << Account1.getMonthlyInterestRate() << endl;

}
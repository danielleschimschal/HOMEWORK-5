
#include "Header.h"


	Account::Account()
	{
		id = 1234;
		balance = 2000;
		annualInterestRate = 5;
	}

	Account::Account(int id1, double balance1, double annualInterestRate1)
	{
		id = id1;
		balance = balance1;
		annualInterestRate = annualInterestRate1;
	}

	void Account::set_name(string the_name)
	{
		name = the_name;
	}

	void Account::set_balance(double the_balance)
	{
		balance = the_balance;
	}

	void Account::set_annualInterestRate(double the_annualInterestRate)
	{
		annualInterestRate = the_annualInterestRate;
	}

	void Account::set_id(int the_id)
	{
		id = the_id;
	}

	string Account::getname()
	{
		return name;
	}
	double Account::getbalance()
	{
		return balance;
	}
	int Account::getMonthlyInterestRate()
	{
		return (annualInterestRate*balance) / 12;
	}
	void Account::withdraw(int amount)
	{
		balance -= amount;
	}
	void Account::deposit(int amount)
	{
		balance += amount;
	}
	
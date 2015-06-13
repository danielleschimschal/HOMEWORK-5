#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <vector>
using namespace std;


class Transaction{
private:
	double amount;
	double balance;
	char type;
	string description;

	double getamount();
	double getbalance();
	string getdescription();


public:
	Transaction(char type, double amount, double balace, string description);

};

class Account
{
public:
	int id;
	double balance;
	double annualInterestRate;
	string name;

	Account();
	Account(int id, double balance, double annualInterestRate);
	Account(string name, int id, double balance);

	string getname();
	double getbalance();
	double getannualInterestRate();
	int getid();
	vector <Transaction> transactions; 

	void set_name(string);
	void set_balance(double);
	void set_annualInterestRate(double);
	void set_id(int);

	int getMonthlyInterestRate();
	void withdraw(int);
	void deposit(int);

};

#endif 
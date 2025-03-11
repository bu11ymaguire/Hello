#ifndef BankAccount_H
#define BankAccount_H
#include <iostream>
#include <string>



class BankAccount
{
private:
	std::string accountHolder;
	double balance;

public:
	BankAccount(std::string ac, double bl);
	void deposit(double amount);
	void withdraw(double amount);
	double getBalance();
	std::string accH();
};

#endif

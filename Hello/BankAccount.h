#ifndef BankAccount_H
#define BankAccount_H
#include <iostream>
#include <string>
// 네임스페이스 std 사용은 지양하기


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

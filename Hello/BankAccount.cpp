#include <iostream>
#include <cstring>
#include "BankAccount.h"

using namespace std;

BankAccount::BankAccount(string ac, double bl) : accountHolder(ac),balance(bl) {}

void BankAccount::deposit(double amount) 
{
	balance += amount;
}

void BankAccount::withdraw(double amount)
{
	if (amount > balance) 
	{
		cout << "경고:출금하려는 금액이 잔액보다 많습니다!" << endl;
	}
	else 
	{
		balance -= amount;
	}
}

double BankAccount::getBalance() 
{
	return balance;
}

string BankAccount:: accH() 
{
	return accountHolder;
}
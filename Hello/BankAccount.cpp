#include <iostream>
#include <cstring>
#include "BankAccount.h"

using namespace

BankAccount::BankAccount() : acountHolder(0) {}

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

double BankAccount::getbalance() 
{
	return balance;
}

string BankAccount:: accH() 
{
	return accountHolder;
}
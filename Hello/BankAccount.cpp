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
		cout << "���:����Ϸ��� �ݾ��� �ܾ׺��� �����ϴ�!" << endl;
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
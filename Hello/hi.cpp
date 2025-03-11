#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;

int main()
{
	string Name;
	cout << "Enter Your name:";
	cin >> Name;
	double balance;
	cout << "How much Your Asset?:";
	cin >> balance;
	BankAccount acc(Name, balance);
	int a = 1;
	while (a != 0)
	{
		cout <<"안녕하세요."<<acc.accH()<< "BankAccount Sys" << endl;
		cout << "1:잔액 확인 2:입금 3:출금 0:종료:";
		cin >> a;
		switch (a)
		{
		case 0:
			cout << "안녕히 가세요.";
			break;
		case 1:
			cout << acc.getBalance() << endl;
			break;
		case 2:
			double dp;
			cout << "입금할 금액 입력:";
			cin >> dp;
			acc.deposit(dp);
			break;
		case 3:
			double wth;
			cout << "출금할 금액 입력:";
			cin >> wth;
			acc.withdraw(wth);
			break;
		default:
			cout << "유효하지 않은 값." << endl;
			break;
		}
	}
	return 0;
}
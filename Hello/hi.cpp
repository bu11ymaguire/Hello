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
		cout <<"�ȳ��ϼ���."<<acc.accH()<< "BankAccount Sys" << endl;
		cout << "1:�ܾ� Ȯ�� 2:�Ա� 3:��� 0:����:";
		cin >> a;
		switch (a)
		{
		case 0:
			cout << "�ȳ��� ������.";
			break;
		case 1:
			cout << acc.getBalance() << endl;
			break;
		case 2:
			double dp;
			cout << "�Ա��� �ݾ� �Է�:";
			cin >> dp;
			acc.deposit(dp);
			break;
		case 3:
			double wth;
			cout << "����� �ݾ� �Է�:";
			cin >> wth;
			acc.withdraw(wth);
			break;
		default:
			cout << "��ȿ���� ���� ��." << endl;
			break;
		}
	}
	return 0;
}
#include <iostream>
#include <string>  // <cstring> ��� <string> ���
using namespace std;

class Rectangle
{
private:
	int width;
	int height;

public:
	Rectangle(int a, int b) 
	{
		width = a;
		height = b;
	}

	int get_area()
	{
		return width * height;
	}
	int get_parameter()
	{
		return 2 * (width + height);
	}
	
};

class BankAccount
{
private:
	string accountHolder;
	double balance;
public:
	BankAccount(string ac, double bl) 
	{
		accountHolder = ac;
		balance = bl;
	}

	void deposit(double amount) 
	{
		if (amount < 0) 
		{
			cout << "amount�� ������ �� �� �����ϴ�." << endl;
		}
		else 
		{
			balance += amount;
		}
	}

	void withdraw(double amount)
	{
		if (balance < amount) 
		{
			cout << "Warning!:" << "�ܾ� ����." << endl;
		}
		else 
		{
			balance -= amount;
			cout << amount << "�� ���" << endl;
		}
	}

	double getBalance() 
	{
		return balance;
	}
	string accH() 
	{
		return accountHolder;
	}
};

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


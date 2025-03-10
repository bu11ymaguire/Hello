#include <iostream>
#include <string>  // <cstring> 대신 <string> 사용
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
			cout << "amount는 음수가 될 수 없습니다." << endl;
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
			cout << "Warning!:" << "잔액 부족." << endl;
		}
		else 
		{
			balance -= amount;
			cout << amount << "이 출력" << endl;
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


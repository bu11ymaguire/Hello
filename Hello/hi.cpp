#include <iostream>
#include <string>
using namespace std;
//�� �б�� ��ȭ��ȣ�� �����

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

class MyString
{
public:
	MyString()
	{
		// ȣ�� ���� Ȯ��
		cout << "MyString()" << endl;

		size_ = 1;
		str_ = new char[size_];
	}

	MyString(const char* init_str) // init_str�� ��ȿ�� �޸𸮶�� ����
	{
		cout << "MyString(const char *init_str)" << endl;

		// 1. ���� �� ���� Ȯ��
		size_ = 0;
		while (init_str[size_] != '\0')
		{
			size_++; // ++ ������ �ȳ�
		}

		// 2. ���� ���� 0�� �ƴϸ� �޸� �Ҵ�
		if (size_ > 0)
		{
			str_ = new char[size_];
		}

		// 3. ����
		for (int i = 0; i < size_; i++)
		{
			str_[i] = init_str[i];
		}
		// memcpy() ��� ����
	}

	~MyString()
	{
		// ȣ�� ���� Ȯ��
		cout << "Destructor" << endl;

		size_ = 0;
		if (str_)
			delete[] str_;
	}

	void Resize(int new_size)
	{
		char* new_str = new char[new_size];

		// memcpy() ��� ����
		for (int i = 0; i < (new_size < size_ ? new_size : size_); i++)
		{
			new_str[i] = str_[i];
		}

		delete[] str_;
		str_ = new_str;
		size_ = new_size;

		// new_str ����� �ȵǿ�!
	}

	void Print()
	{
		for (int i = 0; i < size_; i++)
		{
			cout << str_[i];
		}
		cout << endl;
	}

	void Append(MyString* app_str) // ���� Ÿ���� �Ű������� ��� ����
	{
		int old_size = size_;
		Resize(size_+app_str->size_);

		for (int i = old_size; i < size_; i++)
		{
			str_[i] = app_str->str_[size_ - i];
		}
	}

private:
	int size_ = 0;        // m_size
	char* str_ = nullptr; // m_str (���⼭�� ���� ��Ÿ��)
};

int main() 
{
	MyString A("Hello World!");
	A.Print();
}



/*
/int main()
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
*/


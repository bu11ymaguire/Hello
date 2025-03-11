#include <iostream>
#include <string>
using namespace std;
//새 분기로 전화번호부 만들기

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

class MyString
{
public:
	MyString()
	{
		// 호출 시점 확인
		cout << "MyString()" << endl;

		size_ = 1;
		str_ = new char[size_];
	}

	MyString(const char* init_str) // init_str이 유효한 메모리라고 가정
	{
		cout << "MyString(const char *init_str)" << endl;

		// 1. 글자 수 먼저 확인
		size_ = 0;
		while (init_str[size_] != '\0')
		{
			size_++; // ++ 연산자 안내
		}

		// 2. 글자 수가 0이 아니면 메모리 할당
		if (size_ > 0)
		{
			str_ = new char[size_];
		}

		// 3. 복사
		for (int i = 0; i < size_; i++)
		{
			str_[i] = init_str[i];
		}
		// memcpy() 사용 가능
	}

	~MyString()
	{
		// 호출 시점 확인
		cout << "Destructor" << endl;

		size_ = 0;
		if (str_)
			delete[] str_;
	}

	void Resize(int new_size)
	{
		char* new_str = new char[new_size];

		// memcpy() 사용 가능
		for (int i = 0; i < (new_size < size_ ? new_size : size_); i++)
		{
			new_str[i] = str_[i];
		}

		delete[] str_;
		str_ = new_str;
		size_ = new_size;

		// new_str 지우면 안되요!
	}

	void Print()
	{
		for (int i = 0; i < size_; i++)
		{
			cout << str_[i];
		}
		cout << endl;
	}

	void Append(MyString* app_str) // 같은 타입을 매개변수로 사용 가능
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
	char* str_ = nullptr; // m_str (여기서는 구글 스타일)
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
*/


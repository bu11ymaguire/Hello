#include <iostream>	
#include <cstring>
using namespace std;

const int kMaxStr = 100;

int main()
{
	char args1[] = "Hello World!";
	char* args2 = new char[kMaxStr];
	strcpy_s(args2, (strlen(args1) + 1), args1);
	cout << args1 << endl;
	cout << args2 << endl;
	delete[] args2;
	return 0;
}
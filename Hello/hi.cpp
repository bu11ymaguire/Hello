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

int main() 
{
	Rectangle A(10, 20);
	cout << A.get_area() << endl;
	cout << A.get_parameter() << endl;
	return 0;
}
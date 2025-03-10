#include <iostream>
#include <string>  // <cstring> 대신 <string> 사용
using namespace std;

class Rectangle
{
	int get_area(int width, int height)
	{
		return width * height;
	}
	int get_parameter(int width, int height) 
	{
		return 2 * (width + height);
	}
};

int main() 
{
	Rectangle A(10, 20);
	cout << A.get_area(10, 20) << endl;
	cout << A.get_parameter(10, 20) << endl;
	return 0;
}
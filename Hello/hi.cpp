#include <iostream>
#include <string>  // <cstring> 대신 <string> 사용
using namespace std;

struct info 
{
    string name;
    int age;
    int grade;
};

int main() 
{
    info students[3];

    students[0].name = "John";   // 문자열 직접 할당
    students[0].age = 20;
    students[0].grade = 11;

    students[1].name = "Kylian";
    students[1].age = 12;
    students[1].grade = 6;

    students[2].name = "Lionel";
    students[2].age = 15;
    students[2].grade = 8;

    for (int i = 0; i < 3; i++)
    {
        cout << students[i].name << endl;
        cout << students[i].age << endl;
        cout << students[i].grade << endl;
    }
    
    double avg = (students[0].age + students[1].age + students[2].age) / 3.0;  // 3.0으로 나눠야 정확한 실수형 결과
    cout << "Average age: " << avg << endl;

    info* student1 = new info;
	info* student2 = new info;
	info* student3 = new info;

	student1->name = students[0].name;
	student1->age = students[0].age;    
	student1->grade = students[0].grade;

	student2->name = students[1].name;  
	student2->age = students[1].age;
	student2->grade = students[1].grade;

	student3->name = students[2].name;  
	student3->age = students[2].age;
	student3->grade = students[2].grade;

	student1->name = "Horolo";
	student1->age = 10;
    student1->grade = 4;

    student2->name = "Hello Therer";
    student2->age = 5;
    student2->grade = 0;

	student3->name = "HAHA";
    student3->age = 7;
    student3->grade = 1;

    for (int i= 0; i < 3; i++) 
    {
        cout << students[i].name << endl;
		cout << students[i].age << endl;
		cout << students[i].grade << endl;
    }

	delete student1;
    delete student2;
    delete student3;

    return 0;
}

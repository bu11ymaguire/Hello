#include <iostream>
#include <string>  // <cstring> ��� <string> ���
using namespace std;

struct info {
    string name;
    int age;
    int grade;
};

int main() {
    info students[3];

    students[0].name = "John";   // ���ڿ� ���� �Ҵ�
    students[0].age = 20;
    students[0].grade = 11;

    students[1].name = "Kylian";
    students[1].age = 12;
    students[1].grade = 6;

    students[2].name = "Lionel";
    students[2].age = 15;
    students[2].grade = 8;

    double avg = (students[0].age + students[1].age + students[2].age) / 3.0;  // 3.0���� ������ ��Ȯ�� �Ǽ��� ���
    cout << "Average age: " << avg << endl;

    return 0;
}

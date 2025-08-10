#include <iostream>
using namespace std;

/* Class */
class Student {
public:
    int rollNo;
    int age;

    void show() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    /* Objects */
    Student s1;   // object 1
    Student s2;   // object 2

    s1.rollNo = 1;
    s1.age = 18;

    s2.rollNo = 2;
    s2.age = 19;

    s1.show();
    s2.show();

    return 0;
}

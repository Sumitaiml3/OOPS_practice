#include <iostream>
using namespace std;
class Student {
    int roll;
    string name;
public:
    Student() {
        roll = 0;
        name = "unknown";
        cout << "Default constructor called" << endl;
    }
    Student(int r, string n) {
        roll = r;
        name = n;
        cout << "Parameterized constructor called" << endl;
    }
    Student(Student &s) {
        roll = s.roll;
        name = s.name;
        cout << "Copy constructor called" << endl;
    }
    void show() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
    }
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};
int main() {
    Student s1;
    s1.show();
    cout << endl;
    Student s2(101, "Sumit");
    s2.show();
    cout << endl;
    Student s3(s2);
    s3.show();
    cout << endl;
    return 0;
}

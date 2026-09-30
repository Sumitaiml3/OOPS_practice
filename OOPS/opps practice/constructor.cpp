#include <iostream>
using namespace std;

class student {
    string name;
    int marks;
public:
    student(string n, int m) {
        name = n;
        marks = m;
        cout << "Parameterized Constructor" << endl;
    }
    student() {
        name = "Sumit";
        marks = 92;
        cout << "Default Constructor" << endl;
    }
    student(const student &s) {
        name = s.name;
        marks = s.marks;
        cout << "Copy Constructor" << endl;
    }
    ~student() {
        cout << "Destructor" << endl;
    }

    void show() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    student s1;               
    student s2("Sumit", 90);
    student s3 = s2;

    s1.show();
    s2.show();
    s3.show();

    return 0;            
}

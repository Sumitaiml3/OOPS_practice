#include <iostream>
using namespace std;
class student {
    public:
    string name;
    int roll_no;
    int marks;
    student() {
        name = "Unknown";
        roll_no = 0;
        marks = 0;
    }
    student(string n, int r, int m) {
        name = n;
        roll_no = r;
        marks = m;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    student obj1;
    obj1.display(); 
    student obj2("John Doe", 123, 85);
    obj2.display();
    return 0;
}
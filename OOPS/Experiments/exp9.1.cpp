#include <iostream>
using namespace std;
class Student {
    int roll;
    string name;
    float marks;
public:
    void read() {
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
    float getMarks() {
        return marks;
    }
};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student *students = new Student[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << endl;
        students[i].read();
    }
    cout << "\nStudent Records\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
        cout << endl;
    }
    Student *highest = &students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].getMarks() > highest->getMarks()) {
            highest = &students[i];
        }
    }
    cout << "Student with highest marks:\n";
    highest->display();
    delete[] students;
    return 0;
}

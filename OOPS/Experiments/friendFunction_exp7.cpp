#include <iostream>
using namespace std;
class Student {
    int marks;
    static int count;
public:
    Student(int m) {
        marks = m;
        count++;
    }
    static void showCount() {
        cout << "Total students: " << count << endl;
    }
    friend void showMarks(Student s);
};
int Student::count = 0;
void showMarks(Student s) {
    cout << "Marks: " << s.marks << endl;
}
int main() {
    Student s1(85);
    Student s2(90);
    Student s3(78);
    Student::showCount();
    showMarks(s1);
    showMarks(s2);
    showMarks(s3);
    return 0;
}

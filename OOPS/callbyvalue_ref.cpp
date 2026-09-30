#include <iostream>
using namespace std;
void data(int x) {
    x=20;
    cout << "The value of x is: " << x << endl;
}
void data2(int &x) {
    x=30;
    cout << "The value of x is: " << x << endl;
}
int main() {
    int m = 10;
    data(m);
    cout << "The value of m after data() is: " << m << endl;
    data2(m);
    cout << "The value of m after data2() is: " << m << endl;
    return 0;
}
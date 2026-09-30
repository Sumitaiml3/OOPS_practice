#include <iostream>
using namespace std;
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    float add(float a, float b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
};
int main() {
    Calculator c;
    cout << "Integer addition: " << c.add(10, 20) << endl;
    cout << "Float addition: " << c.add(10.5f, 20.5f) << endl;
    cout << "Double addition: " << c.add(10.25, 20.75) << endl;
    return 0;
}

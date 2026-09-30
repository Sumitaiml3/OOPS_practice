/*WAP c++ program to store the monthly salary of 6 employees in a vector collection. Use a range-based for loop using auto to display the following 
1. The monthly salary of each employee
2. The total salary of all employees    
3. find the highest salary among the employees
4. count how many employees have a salary greater than 50000
5. calculate the average salary of the employees*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> salary = {45000, 55000, 60000, 40000, 70000, 50000};
    int totalSalary = 0;
    int highestSalary = salary[0];
    int countGreaterThan50000 = 0;
    for (auto value : salary) {
        cout << "Monthly salary: " << value << endl;
        totalSalary += value;
        if (value > highestSalary) {
            highestSalary = value;
        }
        if (value > 50000) {
            countGreaterThan50000++;
        }
    }
    double averageSalary = totalSalary / salary.size();
    cout << "Total salary of all employees: " << totalSalary << endl;
    cout << "Highest salary among employees: " << highestSalary << endl;
    cout << "Number of employees with salary greater than 50000: " << countGreaterThan50000 << endl;
    cout << "Average salary of employees: " << averageSalary << endl;
    return 0;
}

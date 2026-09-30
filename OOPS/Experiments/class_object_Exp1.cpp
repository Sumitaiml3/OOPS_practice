#include <iostream>
#include <string>
using namespace std;
class teacher{
    string name;
    string dept;
    public:
    void setData(string n, string d){
        name = n;
        dept = d;
    }
    void changedept(string newdept){
        dept = newdept;
    }
    void displayData(){
        cout<<"Name:"<<name<<endl;
        cout<<"Department:"<<dept<<endl;
    }
};
int main(){
    teacher t1;
    t1.setData("John Doe", "Mathematics");
    t1.displayData();
    return 0;
}
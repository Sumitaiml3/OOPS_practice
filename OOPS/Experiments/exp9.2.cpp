
#include <iostream>
using namespace std;
class ServiceRecord {
    string serviceName;
    float cost;
public:
    void read() {
        cout << "Enter service name: ";
        cin >> serviceName;

        cout << "Enter service cost: ";
        cin >> cost;
    }
    void display() {
        cout << "Service: " << serviceName << endl;
        cout << "Cost: " << cost << endl;
    }
    float getCost() {
        return cost;
    }
};
class Vehicle {
    string vehicleNumber;
    string ownerName;
    int serviceCount;
    ServiceRecord *services;
public:
    Vehicle(string number, string owner, int count) {
        vehicleNumber = number;
        ownerName = owner;
        serviceCount = count;
        services = new ServiceRecord[serviceCount];
    }
    void readServices() {
        for (int i = 0; i < serviceCount; i++) {
            cout << "\nEnter service " << i + 1 << endl;
            services[i].read();
        }
    }
    void display() {
        cout << "\nVehicle Number: " << vehicleNumber << endl;
        cout << "Owner Name: " << ownerName << endl;
        float total = 0;
        cout << "\nService Records:\n";
        for (int i = 0; i < serviceCount; i++) {
            services[i].display();
            total += services[i].getCost();
        }
        cout << "\nTotal Service Bill: " << total << endl;
    }
    ~Vehicle() {
        delete[] services;
        cout << "\nMemory released." << endl;
    }
};
int main() {
    string number, owner;
    int count;
    cout << "Enter vehicle number: ";
    cin >> number;
    cout << "Enter owner name: ";
    cin >> owner;
    cout << "Enter number of services: ";
    cin >> count;
    Vehicle *vehicle = new Vehicle(number, owner, count);
    vehicle->readServices();
    vehicle->display();
    delete vehicle;
    return 0;
}

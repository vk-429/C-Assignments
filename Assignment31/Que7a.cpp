#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee {
protected:
    int empCode;
    string name;

public:
    Employee(int code, const string& empName) : empCode(code), name(empName) {}

    virtual void displayDetails() {
        cout << "Employee Code: " << empCode << endl;
        cout << "Name: " << name << endl;
    }

    int getEmpCode() {
        return empCode;
    }
};

class Fulltime : public Employee {
private:
    float dailyRate;
    int numOfDays;
    float salary;

public:
    Fulltime(int code, const string& empName, float rate, int days) : Employee(code, empName), dailyRate(rate), numOfDays(days) {
        calculateSalary();
    }

    void calculateSalary() {
        salary = dailyRate * numOfDays;
    }

    void displayDetails() {
        Employee::displayDetails();
        cout << "Daily Rate: " << dailyRate << endl;
        cout << "Number of Days: " << numOfDays << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Parttime : public Employee {
private:
    float numOfHours;
    float hourlyRate;
    float salary;

public:
    Parttime(int code, const string& empName, float hours, float rate) : Employee(code, empName), numOfHours(hours), hourlyRate(rate) {
        calculateSalary();
    }

    void calculateSalary() {
        salary = numOfHours * hourlyRate;
    }

    void displayDetails() {
        Employee::displayDetails();
        cout << "Number of Hours: " << numOfHours << endl;
        cout << "Hourly Rate: " << hourlyRate << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    vector<Employee*> employees;
    int choice, empCode;
    string name;
    float dailyRate, hourlyRate;
    int numOfDays;
    float numOfHours;
    bool found = false;
    do {
        cout << "\n----- Menu -----";
        cout << "\n1. Accept employee details";
        cout << "\n2. Display employee details";
        cout << "\n3. Search employee by emp-code";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter employee code: ";
                cin >> empCode;
                cout << "Enter employee name: ";
                cin.ignore();
                getline(cin, name);

                int empType;
                cout << "Employee type:\n";
                cout << "1. Full-time\n";
                cout << "2. Part-time\n";
                cout << "Enter employee type: ";
                cin >> empType;

                if (empType == 1) {
                    cout << "Enter daily rate: ";
                    cin >> dailyRate;
                    cout << "Enter number of days: ";
                    cin >> numOfDays;
                    employees.push_back(new Fulltime(empCode, name, dailyRate, numOfDays));
                } else if (empType == 2) {
                    cout << "Enter number of working hours: ";
                    cin >> numOfHours;
                    cout << "Enter hourly rate: ";
                    cin >> hourlyRate;
                    employees.push_back(new Parttime(empCode, name, numOfHours, hourlyRate));
                } else {
                    cout << "Invalid employee type." << endl;
                }
                break;

            case 2:
                cout << "\nEmployee Details:\n";
                for (const auto& employee : employees) {
                    employee->displayDetails();
                    cout << "--------------------------\n";
                }
                break;

            case 3:
                cout << "\nEnter employee code to search: ";
                cin >> empCode;
                bool found = false;
                for (const auto& employee : employees) {
                    if (employee->getEmpCode() == empCode) {
                        cout << "\nEmployee Details:\n";
                        employee->displayDetails();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Employee not found." << endl;
                }
                break;

            case 4:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
                break;
        }
    } while (choice != 4);

    // Clean up allocated memory
    for (const auto& employee : employees) {
        delete employee;
    }

    return 0;
}

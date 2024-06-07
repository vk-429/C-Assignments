#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate random employee ID
int generate_emp_id() {
    return rand() % 90000 + 10000; // Generates a random 5-digit integer employee ID
}

// Employee structure
struct Employee {
    int emp_id;
    string emp_name;
    string emp_address;
    string emp_dept;
    string emp_phone;
    int emp_age;
};

int main() {
    srand(static_cast<unsigned>(time(0))); // Seed random number generator

    // Lists of possible attributes
    vector<string> names = {"John Doe", "Jane Smith", "Michael Johnson", "Emily Brown", "Christopher Davis", "Sarah Wilson", "Daniel Martinez", "Jessica Anderson", "David Taylor", "Lisa Thomas", "Mark Lee", "Mary Harris", "Paul Clark", "Karen Lewis", "Kevin Walker", "Nancy Hall", "Brian Allen", "Jennifer Young", "Steven Hernandez", "Susan King", "Andrew Wright", "Maria Lopez", "James Hill", "Patricia Green", "Matthew Adams", "Linda Baker", "Gary Garcia", "Cynthia Mitchell", "Jason Perez", "Angela Roberts", "Ryan Turner", "Donna Carter", "Scott Morris", "Rebecca Rivera", "Eric Ward", "Sharon Cooper", "Kenneth Rogers", "Deborah Reed", "Joshua Bailey", "Michelle Nelson", "Ronald Coleman", "Laura Howard", "Edward Kim", "Amanda Hayes", "Thomas Parker", "Stephanie Bell", "Timothy Hughes", "Betty Murphy"};
    vector<string> addresses = {"123 Main St", "456 Elm St", "789 Oak St", "101 Pine St", "222 Maple St", "333 Cedar St", "444 Walnut St", "555 Birch St", "666 Cherry St", "777 Spruce St", "888 Willow St"};
    vector<string> departments = {"Admin", "Sales", "Production", "IT"};

    // Generating 50 employee IDs
    vector<Employee> employee_ids;
    for (int i = 0; i < 50; ++i) {
        Employee emp;
        emp.emp_id = generate_emp_id();
        emp.emp_name = names[rand() % names.size()];
        emp.emp_address = addresses[rand() % addresses.size()];
        emp.emp_dept = departments[i % departments.size()]; // Distribute departments evenly
        emp.emp_phone = "";
        for (int j = 0; j < 10; ++j) {
            emp.emp_phone += '0' + rand() % 10; // Generate random phone number
        }
        emp.emp_age = rand() % 41 + 20; // Generate random age between 20 and 60
        employee_ids.push_back(emp);
    }

    // Printing the employee IDs
    for (const auto& emp : employee_ids) {
        cout << emp.emp_id << "\n" << emp.emp_name << "\n" << emp.emp_address << "\n" << emp.emp_dept << "\n" << emp.emp_phone << "\n" << emp.emp_age << "\n\n";
    }

    return 0;
}


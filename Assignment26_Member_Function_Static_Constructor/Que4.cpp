#include <iostream>
using namespace std;
class Counter {
private:
    int value;

public:
    // Constructor to initialize the counter with an initial value
    Counter(int initial_value = 0) : value(initial_value) {}

    // Method to increment the counter value by 1
    void increment() 
    {
        value++;
    }

    // Method to decrement the counter value by 1
    void decrement() 
    {
        value--;
    }

    // Method to display the current counter value
    void show() const
    {
        cout << "Counter value: " << value << std::endl;
    }
};

int main() {
    Counter counter(10);  // Initialize the counter with a value of 10
    counter.show();       // Should print: Counter value: 10

    counter.increment();  // Increment the counter
    counter.show();       // Should print: Counter value: 11

    counter.decrement();  // Decrement the counter
    counter.show();       // Should print: Counter value: 10

    return 0;
}

#include <iostream>
using namespace std;

class Inner {
public:
    void display() {
        cout << "Inner class display function" << endl;
    }
};

class Outer {
private:
    Inner* inner;
public:
    Outer() {
        inner = new Inner();
    }
    
    ~Outer() {
        delete inner;
    }
    
    Inner* operator->() {
        return inner;
    }
};

int main() {
    Outer outer;
    outer->display();  // This will call the display function of the Inner class
    return 0;
}

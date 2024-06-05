#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d1 = {2, 3, 4};
    deque<int>::reverse_iterator rit = d1.rbegin();
    cout << *rit << "\n"; // This should print the last element of the deque

    return 0;
}

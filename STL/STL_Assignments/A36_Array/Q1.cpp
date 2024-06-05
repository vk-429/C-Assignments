#include <iostream>
using namespace std;
#include <array>

int main() {
    // Define an array of integers with size 5
    array<int, 5> arr = {1, 2, 3, 4, 5};

    int index;
    cout<<"Enter the index : ";
    cin>>index;
    // Get a reference to the element at index 2
    int& element_ref = arr.at(index);

    // Print the element before modifying it
    cout << "Element at index "<<index<<" before modification: " << element_ref << '\n';

    // Modify the element through the reference
    element_ref = 10;

    // Print the element after modifying it
    cout << "Element at index "<<index <<" after modification: " << arr.at(index) << '\n';

    return 0;
}


#include <iostream>
using namespace std;
#include <forward_list>

int main() {
    // Create a forward list of integers
    forward_list<int> flist = {10, 20, 30, 40};

    // Print the elements of the forward list
    cout << "Initial forward list: ";
    for (int x : flist) {
        cout<<x<< " ";
    }
    cout<<"\n";

    // Insert an element at the front
    flist.push_front(5);
    cout << "After push_front(5): ";
    for (int x : flist) {
        cout<<x<< " ";
    }
    cout<<"\n";

    // Insert elements after the first element
    auto it = flist.begin();
    flist.insert_after(it, 15);
    flist.insert_after(it, 25);
    cout << "After insert_after: ";
    for (int x : flist) {
        cout<<x<< " ";
    }
    cout<<"\n";

    // Remove an element from the front
    flist.pop_front();
    cout << "After pop_front(): ";
    for (int x : flist) {
        cout<<x<< " ";
    }
    cout<<"\n";

    // Remove elements with a specific value
    flist.remove(20);
    cout << "After remove(20): ";
    for (int x : flist) {
        cout<<x<< " ";
    }
    cout<<"\n";

    // Use erase_after to remove an element after a specific position
    it = flist.begin();
    flist.erase_after(it);
    cout << "After erase_after(begin()): ";
    for (int x : flist) {
        cout<<x<< " ";
    }
    cout<<"\n";

    // Clear the forward list
    flist.clear();
    cout << "After clear(): ";
    for (int x : flist) {
        cout<<x<< " ";
    }
    cout<<"\n";

    return 0;
}

#include <iostream>
using namespace std;
#include <forward_list>

int main() {
    // Define two forward lists
    forward_list<int> list1 = {1, 2, 3, 4};
    forward_list<int> list2 = {5, 6, 7};

    // Display the initial content of both lists
    cout << "Initial content of list1: ";
    for (int x : list1) {
        cout << x << " ";
    }
    cout<<'\n';

    cout << "Initial content of list2: ";
    for (int x : list2) {
        cout << x << " ";
    }
    cout<<'\n';

    // Splice list2 after the first element of list1
    auto it = list1.before_begin(); // iterator before the first element
    list1.splice_after(it, list2);

    // Display the content of list1 after splicing
    cout << "Content of list1 after splice_after(): ";
    for (int x : list1) {
        cout << x << " ";
    }
    cout<<'\n';

    // Display the content of list2 after splicing
    cout << "Content of list2 after splice_after(): ";
    for (int x : list2) {
        cout << x << " ";
    }
    cout<<'\n';

    return 0;
}

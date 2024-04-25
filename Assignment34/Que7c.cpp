#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm> // for std::sort
#include <limits>
using namespace std;

class Item {
private:
    char item_code[7];
    char item_name[21];
public:
    int price; // Make price a public member
    friend void Read(Item[]);
    void Print() {
        cout << item_code << "\n";
        cout << item_name << "\n";
        cout << price << "\n";
        cout << "\n";
    }
};

// Comparison function for sorting items by price in descending order
bool CompareByPrice(const Item& a, const Item& b) {
    return a.price > b.price;
}

void Read(Item I[50]) {
    ifstream fin;
    fin.open("c:/File/Item.txt", ios::in);
    string line;
    int i = 0;
    while (!fin.eof() && i < 50) {
        getline(fin, line);

        // Extract item_code from the line
        strncpy(I[i].item_code, line.c_str(), 6);
        I[i].item_code[6] = '\0';

        getline(fin, line);

        // Extract item_name from the line
        strncpy(I[i].item_name, line.c_str(), 20);
        I[i].item_name[20] = '\0';

        getline(fin, line);

        // Extract price from the line
        I[i].price = stoi(line);

        fin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore the rest of the line

        i++;
    }
    fin.close();

    // Sort the items based on price in descending order
    sort(I, I + i, CompareByPrice);
}

int main() {
    Item I[50];
    int i;
    Read(I);
    for (i = 0; i < 50; i++)
        I[i].Print();
    return 0;
}

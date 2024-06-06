#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

class Item {
private:
    string code;
    string name;
    int price;

public:
    Item() : code(""), name(""), price(0) {} // Constructor to initialize members
    friend void getInput(Item[]);
    void Print();
};

void getInput(Item I[]) {
    ifstream fin;
    fin.open("c:/File/Item.txt", ios::in);
    if (!fin) {
        cout << "Error Opening File\n";
    } else {
        for (int i = 0; i < 50; i++) {
            if (!getline(fin, I[i].code)) {
                cout << "End of file or error reading code at index " << i << endl;
                break;
            }
            if (!getline(fin, I[i].name)) {
                cout << "End of file or error reading name at index " << i << endl;
                break;
            }
            if (!(fin >> I[i].price)) {
                cout << "End of file or error reading price at index " << i << endl;
                break;
            }
            fin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the newline character
            fin.ignore(numeric_limits<streamsize>::max(), '\n');
            // Debug output
            cout << "Read item " << i << ": " << I[i].code << ", " << I[i].name << ", " << I[i].price << endl;
        }
        fin.close();
    }
}

void Item::Print() {
    if (!code.empty() && !name.empty() && price > 0) {
        cout << code << "\n";
        cout << name << "\n";
        cout << price << "\n";
    }
}

int main() {
    Item I[50];
    getInput(I);

    for (int i = 0; i < 50; i++) {
        I[i].Print();
    }

    return 0;
}

#include <iostream>
#include <stdexcept>

class Array {
private:
    int* data;
    size_t size;

public:
    Array(size_t size) : size(size) {
        data = new int[size];
    }

    ~Array() {
        delete[] data;
    }

    int& operator[](size_t index) {
        if (index >= size) {
            throw std::out_of_range("Array index out of bounds");
        }
        return data[index];
    }

    const int& operator[](size_t index) const {
        if (index >= size) {
            throw std::out_of_range("Array index out of bounds");
        }
        return data[index];
    }
};

int main() {
    Array arr(5);

    try {
        arr[0] = 1;
        arr[1] = 2;
        arr[2] = 3;
        arr[3] = 4;
        arr[4] = 5;

        std::cout << "Array elements: ";
        for (size_t i = 0; i < 5; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    } catch (const std::out_of_range& ex) {
        std::cout << "Exception caught: " << ex.what() << std::endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

template<typename T>
T arraySum(T arr[],int size) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int intArr[] = {1, 2, 3, 4, 5};
    double doubleArr[] = {1.5, 2.5, 3.5, 4.5, 5.5};

    cout << "Sum of intArr: " << arraySum(intArr,5) << std::endl;
    cout << "Sum of doubleArr: " << arraySum(doubleArr,5) << std::endl;

    return 0;
}

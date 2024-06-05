#include<iostream>
using namespace std;

template<typename T>
class Array
{
    private:
        int capacity;
        int lastindex;
        T *ptr;
    public:
        Array(Array &);
        int getCapacity();
        Array& operator=(const Array&);
        Array(int );
        void Insert(int, T);
        void Edit(int , T );
        int FindElement(T );
        void PrintArray();
        bool CheckEmpty();
        void Append(T );
        void Delete(int);
        bool CheckFull();
        int Count();
        T get(int );
        ~Array();
        
};

// Constructor
template<typename T>
Array<T>::Array(int size)
{
    ptr = new T[size];
    capacity = size;
    lastindex = -1;
}

// Copy Constructor
template<typename T>
Array<T>::Array(Array &arr)
{
    capacity = arr.capacity;
    lastindex = arr.lastindex;
    ptr = new T[capacity];
    for(int i = 0; i <= lastindex; i++)
        ptr[i] = arr.ptr[i];
}

// Assignment Operator Overloading
template<typename T>
Array<T>& Array<T>::operator=(const Array& arr)
{
    if (this != &arr) // Check for self-assignment
    {
        delete[] ptr; // Deallocate the current array

        capacity = arr.capacity;
        lastindex = arr.lastindex;
        ptr = new T[capacity];

        for (int i = 0; i <= lastindex; i++)
            ptr[i] = arr.ptr[i];
    }

    return *this; // Return a reference to the current object
}

// Member function to get capacity
template<typename T>
int Array<T>::getCapacity()
{
    return capacity;
}

// Member function to check if array is empty
template<typename T>
bool Array<T>::CheckEmpty()
{
    return (lastindex == -1);
}

// Member function to append element to the array
template<typename T>
void Array<T>::Append(T num)
{
    if(lastindex == capacity - 1)
    {
        cout<<"Can't Append! Array is already full\n";
        return;
    }
    lastindex++;
    ptr[lastindex] = num;
}

// Member function to delete element from the array
template<typename T>
void Array<T>::Delete(int index)
{
    if(lastindex == -1)
    {
        cout<<"Array is empty\n";
        return;
    }
    else if(index >= 0 && index <= lastindex)
    {
        for(int i = index; i < lastindex; i++)
            ptr[i] = ptr[i+1];
        lastindex--;    
    }
    else
    {
        cout<<"Invalid index!\n";
        return;
    }
}

// Member function to check if array is full
template<typename T>
bool Array<T>::CheckFull()
{
    return (lastindex == capacity - 1);
}

// Member function to get count of elements in array
template<typename T>
int Array<T>::Count()
{
    return lastindex + 1;
}

// Member function to get element at index
template<typename T>
T Array<T>::get(int index)
{
    if(index >= 0 && index <= lastindex)
        return ptr[index];
    cout<<"\nInvalid index!\n";
    return -1;
}

// Destructor
template<typename T>
Array<T>::~Array()
{
    delete[] ptr;
}
// Member function to insert element at a specified index
template<typename T>
void Array<T>::Insert(int index, T num)
{
    if (lastindex == capacity - 1)
    {
        cout << "Error: Array is already full" << endl;
        return;
    }
    else if (index > lastindex + 1 || index < 0)
    {
        cout << "Invalid Index" << endl;
        return;
    }
    else
    {
        for (int i = lastindex; i >= index; i--)
            ptr[i + 1] = ptr[i];
        ptr[index] = num;
        lastindex++;
    }
}

// Member function to edit element at a specified index
template<typename T>
void Array<T>::Edit(int index, T num)
{
    if (index >= 0 && index <= lastindex)
        ptr[index] = num;
    else
    {
        cout << "Invalid index !" << endl;
        return;
    }
}

// Member function to find the index of an element
template<typename T>
int Array<T>::FindElement(T num)
{
    for (int i = 0; i <= lastindex; i++)
    {
        if (ptr[i] == num)
            return i;
    }
    return -1;
}

// Member function to print the elements of the array
template<typename T>
void Array<T>::PrintArray()
{
    for (int i = 0; i <= lastindex; i++)
        cout << ptr[i] << endl;
}

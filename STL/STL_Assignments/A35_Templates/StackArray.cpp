#include"ArrayADT.cpp"
using namespace std;

template<typename T>
class Stack: private Array<T>
{
    public:
        Stack(int);
        Stack(Stack &);
        void push(T);
        T peek();
        void pop();
        ~Stack();
        virtual bool CheckFull();
        virtual bool CheckEmpty();
        int getStackSize();
        Stack& operator=(const Stack &);
};

template<typename T>
Stack<T>& Stack<T>::operator=(const Stack &S)
{
    Array<T>::operator=(S);
    return *this;
}

template<typename T>
int Stack<T>::getStackSize()
{
    return this->getCapacity();
}

template<typename T>
Stack<T>::Stack(Stack &S):Array<T>(S)
{}
template<typename T>
bool Stack<T>::CheckEmpty()
{
    return Array<T>::CheckEmpty();
}

template<typename T>
bool Stack<T>::CheckFull()
{
    return Array<T>::CheckFull();
}

template<typename T>
Stack<T>::~Stack(){}

template<typename T>
void Stack<T>::pop()
{
    if(!CheckEmpty())
        this->Delete(this->Count()-1);
    else
        cout<<"Stack Underflow\n";
}

template<typename T>
T Stack<T>::peek()
{
    if(!CheckEmpty())
        return this->get(this->Count()-1);
    else
        cout<<"Stack is Empty\n";
    return 0;
}

template<typename T>
Stack<T>::Stack(int cap):Array<T>(cap)
{}

template<typename T>
void Stack<T>::push(T data)
{
    if(CheckFull())
        cout<<"Stack Overflow\n";
    else
        this->Append(data);
}

void reverseStack(Stack<int> &s1)
{
    Stack<int> s2(s1.getStackSize());
    while(!s1.CheckEmpty())
    {
        s2.push(s1.peek());
        s1.pop();
    }
    s1=s2;
}

void pushInStack(Stack<int> &s, Stack<int> &minStack, int data)
{
    s.push(data);
    if (minStack.CheckEmpty())
        minStack.push(data);
    else
    {
        if (data > minStack.peek())
            minStack.push(minStack.peek());
        else
            minStack.push(data);
    }
}

void popFromStack(Stack<int> &s, Stack<int> &minStack)
{
    s.pop();
    minStack.pop();
}

int main()
{
    Stack<int> s(5);
    Stack<int> minStack(5);
    pushInStack(s, minStack, 50);
    cout<<"Current min value is "<<minStack.peek()<<"\n";
    pushInStack(s, minStack, 40);
    cout<<"Current min value is "<<minStack.peek()<<"\n";
    pushInStack(s, minStack, 60);
    cout<<"Current min value is "<<minStack.peek()<<"\n";
    pushInStack(s, minStack, 70);
    cout<<"Current min value is "<<minStack.peek()<<"\n";
    pushInStack(s, minStack, 30);
    cout<<"Current min value is "<<minStack.peek()<<"\n";
    cout<<"Poping Start\n";
    popFromStack(s, minStack);
    cout<<"Current min value is "<<minStack.peek()<<"\n";
    popFromStack(s, minStack);
    cout<<"Current min value is "<<minStack.peek()<<"\n";
    popFromStack(s, minStack);
    cout<<"Current min value is "<<minStack.peek()<<"\n";
    popFromStack(s, minStack);
    cout<<"Current min value is "<<minStack.peek()<<"\n";
    popFromStack(s, minStack);
    cout<<"Current min value is "<<minStack.peek()<<"\n";
    return 0;
    // s.push(10); 
    // // if(minStack.CheckEmpty())
    // //     minStack(10);
    // // else

    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);
    // cout<<s.peek()<<"\n";
    // //s.pop();
    // //cout<<s.peek()<<"\n";
    // reverseStack(s);
    // cout<<s.peek()<<"\n";
    // cout<<endl;
}
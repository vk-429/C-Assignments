#include<iostream>
#include<string.h>
using namespace std;
struct Book
{
    int bookid;
    char title[20];
    float price;
};
struct Book inputBook();
void displayBook(struct Book); 
int main()
{
    struct Book b1={1,"C",425.0f};
    struct Book b2,b3;
    b2.bookid=2;
    strcpy(b2.title,"CPP");
    b2.price=324.0f;
    b3=inputBook();
    displayBook(b1);
    displayBook(b2);
    displayBook(b3);
    cout<<endl;
    return 0;
}
struct Book inputBook()
{
    struct Book b;
    cout<<"\nEnter bookid, title, price : ";
    cin>>b.bookid;
    cin.ignore();
    cin.getline(b.title,20);//stdin is optional
    cin>>b.price;
    return b;
}
void displayBook(struct Book b)
{
    cout<<"\n"<<b.bookid<<" "<<b.title<<" "<<b.price;
}
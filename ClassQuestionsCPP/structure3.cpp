#include<iostream>
#include<string.h>
using namespace std;
class Book//struct replced by class same syntax
{
    private:
        int bookid;
        char title[20];
        float price;
    public:
        void displayBook()
        {
            cout<<"\n"<<bookid<<" "<<title<<" "<<price;
        }
        void inputBook()
        {
            cout<<"\nEnter bookid, title, price : ";
            cin>>bookid;
            if(bookid<0)
                bookid=(-bookid);
            cin.ignore();
            cin.getline(title,20);
            cin>>price;
        }
};
int main()
{
    int x;//not related from book
    Book b1,b2,b3;//book data type ke variables, in c++ = OBJECT.
    b3.inputBook();
    b1.displayBook();
    b2.displayBook();
    b3.displayBook();
    cout<<endl;
    return 0;
}

#include<iostream>
using namespace std;
class Item
{
    private:
        int item_no;
        char name[20];
        int price;
    public:
        void inputBase()
        {
            cin.ignore();  
            cout<<"Enter Item Name : ";
            cin.getline(name,20);
            cout<<"Enter Item No. : ";
            cin>>item_no;
            cout<<"Enter Item Price : ";
            cin>>price;
        }
        int getPrice()
        {
            return price;
        }
        void displayBase()
        {
            cout<<"\nItem Name : "<<name<<"\n";
            cout<<"Item No. : "<<item_no<<"\n";
            cout<<"Item Price : "<<price<<"\n";
        }
};
class Discounted_Item:public Item
{
    private:
        int prcnt;
        float disc;
    public:
        void inputItem()
        {
            static int i=1;
            cout<<"\nEnter details of Item "<<i<<" :-\n";
            inputBase();
            cout<<"Enter Discount Percent : ";
            cin>>prcnt;
            cout<<"\n---------------------------------\n"; 
            i++;
        }
        void calcDiscount()
        {
            disc=(getPrice()*prcnt)/100.0;
        }
        float getDiscount()
        {
            return disc;
        }
        void displayItem()
        {
            displayBase();
            cout<<"Discount Percent : "<<prcnt<<"\n";
            cout<<"Discounted Price : "<<(getPrice()-disc)<<"\n";
            cout<<"\n-----------------------------\n";
        }
};
float TotalPrice(Discounted_Item I[],int n)
{
    float sumPrice=0;
    for(int i=0;i<n;i++)sumPrice+=I[i].getPrice();
    return sumPrice;
}
float TotalDiscount(Discounted_Item I[],int n)
{
    float sumDiscount=0;
    for(int i=0;i<n;i++)sumDiscount+=I[i].getDiscount();
    return sumDiscount;
}
int main()
{
    int n;
    cout<<"How many items you want to enter? ";
    cin>>n;
    Discounted_Item I[n];
    for(int i=0;i<n;i++)
        I[i].inputItem();
    for(int i=0;i<n;i++)
        I[i].calcDiscount();
    cout<<"\nDetails of items :-";
    for(int i=0;i<n;i++)
        I[i].displayItem();
    cout<<"\nTotal Price : "<<TotalPrice(I,n)<<endl;
    cout<<"Total Discount : "<<TotalDiscount(I,n)<<endl;
    return 0;
}
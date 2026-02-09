#include<iostream>
using namespace std;
class hotel
{
    public:
    string tableno;
    string name;
    int no;
    string order1;
    int quantity1;
    string order2;
    int quantity2;
    int prize1;
    int prize2;
    public:
    void getinfo()
{
    cout<<"enter a name";
    cin>>name;
    cout<<"enter a contact no";
    cin>>no;
    cout<<"enter a tableno";
    cin>>tableno;
     cout<<"enter a quantity 1";
    cin>>quantity1;
    cout<<"enter a quantity 2";
    cin>>quantity2;
    cout<<"enter a prder 1";
    cin>>order1;

    cout<<"enter a order 2";
    cin>>order2;
    cout<<"enter a prize 1 for first order";
    cin>>prize1;

    cout<<"enter a prize 2 for second order";
    cin>>prize2;
}


public:
    void calculatebill()
    {
        int a,b,c,d,e,f,j;
        a=prize1*quantity1;
        b=prize2*quantity2;
        c=a+b;
        if(c>=5000)
        {
            d=0.2*c;
    
            cout<<"total bill "<<d;
        }
        else
        if(c>=3000)
        {
            e=0.1*c;
            cout<<"total bill"<<e;
        }
        else 
        if(c>=1000)
        {
        f=0.05*c;
        cout<<"total bill"<<f;
        }
        else 
        cout<<"total bill"<<c;
    }
};
int main()
{
    hotel b1;
    b1.getinfo();
    b1.calculatebill();
}
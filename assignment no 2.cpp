#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char x,y;
    while (x!='n')
    {
        cout<<"Enter first Number"<<endl;
        cin>>a;
        cout<<"Enter second Number"<<endl;
        cin>>b;
         cout<<"press + for addition,press -for substraction,press * for multiplication,press / for division,press % forremainder"<<endl;
            cin>>y;
            if (y=='+')
                cout<<"sum ="<<a+b<<endl;
            else if (y=='-')
                cout<<"substraction ="<<a-b<<endl;
            else if (y=='*')
                cout<<"multiplication ="<<a*b<<endl;
            else if (y=='/')
                cout<<"division ="<<a/b<<endl;
            else if (y=='%')
                cout<<"remainder ="<<a%b<<endl;
            cout<<"do you want to continue (y/n)"<<endl;
            cin>>x;
        }
        return 0;
    }
#include<iostream>
using namespace std;
int main()
{
    int x,a;
    float b;
    char c;
    cout<<"Press 1 if you want to enter an interger:"<<endl;
    cout<<"Press 2 if you want to enter an float:"<<endl;
    cout<<"Press 3 if you want to enter an character:"<<endl;
    cin>>x;
    while(x>3)
    {if((x!=1)&&(x!=2)&&(x!=3))
       {
           cout<<"You entered an invalid option:"<<endl;
           cout<<"Please enter a valid option:";
           cin>>x;
    }   }
    switch(x)
    {
    case 1:
        cout<<" Enter an interger:";
        cin>>a;
        cout<<a<<" will take "<<sizeof(a)<<" bytes in the memory";
        break;
    case 2:
        cout<<" Enter a float value:";
        cin>>b;
        cout<<b<<" will take "<<sizeof(b)<<" bytes in the memory";
        break;
    case 3:
        cout<<"Enter a character:";
        cin>>c;
        cout<<c<<" will take "<<sizeof(c)<<" bytes in the memory";
        break;
    }
   return 0;
}

#include <iostream>
using namespace std;
int main()
{
 int a,i,e=0;
 cout<<"Enter your number ";
 cin>>a;
for ( i = 0; i <= a; i++)
{
    if (i%2==0)
    {
        cout<<"\n"<<i;
        e++;
        cout<<"\n";

    }         
}
cout<<"\nTotal even numbers are: "<<e;
    return 0;
}
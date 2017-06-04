#include<iostream>
using namespace std;
int main()
{
int n, a, b, c, d;

cout<<"enter a number: ";
cin>>n;
a=n%10;
cout<<"the last digit"<< a << endl;
n=n/10;
b=n%10;
cout<<"the last digit"<< b << endl;
n=n/10;
c=n%10;
cout<<"the last digit"<< c << endl;
d=a+b+c;
cout<<"the sum of last three digit"<<d;
return 0;
}






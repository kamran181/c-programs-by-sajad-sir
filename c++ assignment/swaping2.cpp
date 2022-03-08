// swaping of number using pointer 
#include<iostream>
using namespace std;
void swap(int*a,int*b)
{
  int t=*a;
      *a=*b;
      *b=t;
}
int main()
{
int a,b;
cout<<"enter the number buddy:\n";
cin>>a>>b;
cout<<"the value of a is"<<a<<"\nthe value of b is"<<b<<"\n";
swap(&a,&b);
cout<<"the value of a is"<<a<<"\nthe value of b is"<<b<<"\n";
return 0;
}
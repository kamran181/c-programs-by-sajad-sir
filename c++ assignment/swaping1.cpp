// using of call by refrence to swap the numbers
#include<iostream>
using namespace std;
 void swap(int &x,int &y) //funtion definition
{  
int t=x;
    x=y;
    y=t;

}
int main()
{
  int a,b;
  cout<<"enter the number buddy:\n";
  cin>>a>>b; 
  cout<<"the value of a is"<<a<<"\nthe value of b is"<<b<<"\n";
  swap(a,b);  //calling funtion
  cout<<"the  value of a is"<<a<<"\nthe value of b is"<<b<<"\n";
 return 0;
}
 
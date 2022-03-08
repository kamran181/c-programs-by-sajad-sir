// using of funtions
#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int c=a+b;
    return c;
} 
int main()
{ int a,b;
  cout<<"Enter the number buddy:\n";
  cin>>a>>b;
  sum(a,b);       //the funtions did not access to actual variable and can only work on the copies of values
  cout<<"the sum is\n"<<sum(a,b)<<"\n";              
 return 0;   
}
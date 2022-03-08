// sum of a digits of an interger
#include<iostream>
using namespace std;
int main()
{
   int number,sum,m;
   cout<<"Enter the number:";
   cin>>number;
   sum=0;
   while(number>0)
   {
     m=number%10;
     sum=sum+m;
     number=number/10;
   }
   cout<<"the sum of digits is = "<<sum<<"\n";
return 0;
}
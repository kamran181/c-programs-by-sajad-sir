//printing numbers upto 100 without prime numbers
#include<iostream>
using namespace std;
int main()
{
int i;
cout<<"Printing numbers upto 100 without including prime numbers\n";
for(i=0;i<100;i++)
{
if(i%3==0)
{
continue;
}
cout<<i<<"\n";
}
return 0;
}
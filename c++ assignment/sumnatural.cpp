/*sum of n natural numbers*/ 
#include<iostream>
using namespace std;
int main()
{ 
   int i,n,sum;
   cout<<"Enter the number buddy \n";
   cin>>n;
   i=1;
   sum=0;
   while(i<=n)
   {
   sum=sum+i;
   	i=i+1; 	
    }
  cout<<"sum="<<sum<<"\n";
  return 0;	
}
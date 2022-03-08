//large of two numbers
#include<iostream>
using namespace std;
int main()
{   
   float a,b,max;
   cout<<"Enter number";
   cin>>a;
   cin>>b;
   if(a>b)
   {
   	max=a;
   }
   else
   { max=b;
   }
   cout<<"max="<<max<<"\n";
	return 0;	
}
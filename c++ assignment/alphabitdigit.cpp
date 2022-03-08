// checking whether a charecter is a digit or alphabit
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"press any key buddy \n";
    ch=getchar();
    if(isalpha(ch)>0)
    cout<<"Alphabit";
    else if(isdigit(ch)>0)
    cout<<"Digit";
    else 
    cout<<"your input is not alphanumaric" ;
    return 0;
}
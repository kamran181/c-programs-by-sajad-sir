// convert upper case into lower case 
#include<iostream>
using namespace std;
int main()
{
  char ch;
  cout<<"Enter the charecter buddy \n";
  ch=getchar();
  if(islower(ch))
  putchar(toupper(ch));
  else if(isupper(ch))
  putchar(tolower(ch));
  else
  cout<<"your charecter is not Alphanumaric";
  return 0;
}
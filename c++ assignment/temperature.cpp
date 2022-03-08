//converting temperature fahrenheit into celsius using class and member funtion 
#include <iostream>
using namespace std;
 class temp
 {
 float fahrenheit,celsius;
 public:
 void getdata(void);
 void display(void); 
 };
void temp::getdata(void)
{
 cout << " Enter the temperature in Fahrenheit : ";
 cin >> fahrenheit;
}
void temp::display(void)
{
   celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
   cout << " Fahrenheit="<<fahrenheit<<"\n";
   cout << " Celsius="<<celsius<<"\n";
}
int main()
{
	temp t;
	t.getdata();
	t.display();
	return 0;
}
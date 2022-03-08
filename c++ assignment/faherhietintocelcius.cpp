//converting temperature fahrenheit into celsius
#include <iostream>
using namespace std;
 
int main()
{
    float fahrenheit,celsius;
    cout << " Enter the temperature in Fahrenheit : ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    cout << " Fahrenheit="<<fahrenheit<<"\n";
    cout << " Celsius="<<celsius<<"\n";
    return 0;
}
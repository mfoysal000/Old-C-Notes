#include <iostream>
using namespace std;

int main()
{
int a,b,c,d,e,f,g,h,x,j;
int sum;
int difference;
int multiplication;
int division;
int modulo; //Division but outputs remainder only//

sum = a + b;
a=1;b=1; //should be 2//
cout << "sum is " << sum;

difference = c - d; //should be 1//
c=2;d=1;
cout << "difference is " << difference;

multiplication = e * f; //should be 8//
e=2;f=4;
cout << "multiplication is " << multiplication;

division = g / h; //should be 2//
g=20;h=10;
cout << "division is " << division;

modulo =  x % j; //should be 2 b/c 5/3 =1 r 2//
x=5;j=3;
cout << "modulo is " << modulo;
return 0;
}
#include <iostream>
using namespace std;

int findmodulo(int a,int b)
{
int modulo = a%b;
return modulo;
}


void printCrap(int x)
{
cout << "Mithi's favorite number is " << x;
}



int main()
{
printCrap(5);


cout << "Your modulo is:" << findmodulo(5,3);
return 0;
}

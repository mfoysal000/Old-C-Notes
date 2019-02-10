#include <iostream>
using namespace std;

int main()
{
int x; //loop length//
int n; //input//
int average;
  average = 0;
  x=1;
cout << "Enter 5 numbers\n";

while(x<=5){
cin >> n;
average = (average + n);
x++;
}

cout << "Your average is " << average/5 << "\n";

 return 0;
}
#include <iostream>
using std::cout;
using std::cin;

int main()
{
  int a;
  int b;
  int c;
  int sum;

cout << "Type a number \n";
cin >> a;

cout << "Type another number \n";
cin >> b;

cout << "Type one final number \n";
cin >> c;

sum = a + b + c;
cout << "The sum is " << sum << ".";

  return 0;
}
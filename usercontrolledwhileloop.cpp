#include <iostream>
using namespace std;

int main()
{
  int grade=0;
  double totalgrade=0;
  int numberofgrades=0;

  cout <<"Enter the first grade:\n";

while(cin>>grade){
  totalgrade=totalgrade+grade;
  numberofgrades++;
  cout <<"Enter any other grades:\n";
}

cout <<"The number of grades is: "<< numberofgrades<<"\n";
cout <<"The average is: " <<totalgrade/numberofgrades<<"\n";

return 0;
}

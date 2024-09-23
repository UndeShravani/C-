#include<iostream>
using namespace std;
int main()
{
  int first,second,add,subtract,multiply;
  float divide;
  cout<<"Enter two numbers :"<<endl;
  cin>>first;
  cin>>second;
  add=first+second;
  subtract=first-second;
  multiply=first*second;
  divide=first/(float)second;
  cout<<"Sum="<<add<<endl;
  cout<<"Difference="<<subtract<<endl;
  cout<<"Multiplication="<<multiply<<endl;
  cout<<"Division="<<divide<<endl;
  return 0;
}
#include<iostream>
using namespace std;
int sum(int num1,int num2){
  return num1+num2;
}
int sum(int num1,int num2,int num3){
  return num1+num2+num3;
}
int main()
{
  //call funtion with 2 int parameters
  cout<<"Sum 1= "<<sum(8,6)<<endl;
  //call function for 2 double parameters
  cout<<"Sum 2="<<sum(8.8,6.6)<<endl;
  //call functioon for 3 int parameters
  cout<<"Sum 3="<<sum(1,8,6)<<endl;
  return 0;
}
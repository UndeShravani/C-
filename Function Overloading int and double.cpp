#include<iostream>
using namespace std;
int add(int a, int b){
  return a+b;
}
double add(double a, double b){
  return a+b;
}
int main(){
  cout<<"Sum of integers:"<<add(2,8)<<endl;
  cout<<"Sum of doubles:"<<add(2.5,4.5)<<endl;
  return 0;
}
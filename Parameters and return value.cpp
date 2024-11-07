#include<iostream>
using namespace std;
int add(int a, int b){
  return a+b;
}
int main(){
  int result=add(5,8);
  cout<<"The result is:"<<result<<endl;
  return 0;
}
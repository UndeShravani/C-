#include<iostream>
using namespace std;
int *getPointer(int &a){
  return &a;
}
int main(){
  int x=42;
  int *ptr=getPointer(x);
  cout<<"Address of x:"<<ptr<<endl;
  cout<<"Value of x:"<<*ptr<<endl;
  return 0;
}
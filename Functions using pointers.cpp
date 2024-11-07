#include<iostream>
using namespace std;
int main(){
  int num=4;
  int *ptr=&num;
  cout<<"Address of num->"<<&num<<endl;
  cout<<"Address stored in pointer->"<<ptr<<endl;
  cout<<"Valuse of num->"<<num<<endl;
  cout<<"value of num using pointer->"<<*ptr<<endl;
  return 0;
}
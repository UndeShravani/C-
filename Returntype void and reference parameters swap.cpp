#include<iostream>
using namespace std;
void swap(int &a, int &b){
  int temp=a;
  a=b;
  b=temp;
}
int main(){
  int x=16, y=18;
  cout<<"Before swapping:x="<<x<<",y="<<y<<endl;
  swap(x,y);
  cout<<"After swap :x="<<x<<",y="<<y<<endl;
  return 0;
}
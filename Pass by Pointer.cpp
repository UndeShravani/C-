#include<iostream>
using namespace std;
void changeValue(int *x){
  *x=25;
}
int main(){
  int a=5;
  changeValue(&a);
  cout<<"Value of a:"<<a<<endl;
  return 0;
}
#include<iostream>
using namespace std;
void displayInfo(string name, int age=15){
  cout<<"Name:"<<name<<",Age:"<<age<<endl;
}
int main(){
  displayInfo("Radha");
  displayInfo("Krishna",16);
  return 0;
  
}
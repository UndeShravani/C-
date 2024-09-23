#include<iostream>
using namespace std;
class Parent{
  public:
  int id_p;
  void printID_p()
  {
    cout<<"BaseID :"<<id_p<<endl;
  }
};
class Child:public Parent {
  public:
  int id_c;
  void printID_c()
  {
    cout<<"Child ID:"<<id_c<<endl;
  }
};
int main()
{
  Child obj1;
  obj1.id_p=7;
  obj1.printID_c();
  obj1.id_c=91;
  obj1.printID_c();
  return 0;
}
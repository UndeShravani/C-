#include<iostream>
using namespace std;
class Engine{
  public:
  void enginesound(){
    cout<<"Engine is runing..."<<endl;
  }
};
class Wheels{
  public:
  void wheelType(){
    cout<<"Car has four wheels"<<endl;
  }
};
class Car:public Engine, public Wheels {
  public:
  void carFeature(){
    cout<<"Car has AC"<<endl;
  }
};
int main(){
  Car myCar;
  myCar.enginesound();
  myCar.wheelType();
  myCar.carFeature();
  
  return 0;
}
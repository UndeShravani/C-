#include<iostream>
using namespace std;
class Base{
  public:
  int publicVar;
  void dispaly()
  {
    cout<<"Value of publicVar:"<<publicVar;
  }
};
class Derived:public Base{
  public:
  void displayMember()
  {
    dispaly();
  }
  void modifyMember(int pub)
  {
    publicVar=pub;
  }
};
int main()
{
  Derived obj;
  obj.modifyMember(10);
  obj.displayMember();
  return 0;
}

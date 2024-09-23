#include<iostream>
using namespace std;
class Shape{
  public:
  virtual void draw()const{
    cout<<"Drawing a shape"<<endl;
  }
  virtual~Shape(){}
};
class Circle:public Shape{
  public:
  void draw()const override{
    cout<<"Drawing a circle "<<endl;
  }
};
class Rectangle:public Shape{
  public:
  void draw()const override{
    cout<<"Drawing a rectangle"<<endl;
  }
};
void renderShape(const Shape*shape){
  shape->draw();
}
int main(){
  Circle myCircle;
  Rectangle myRectangle;
  Shape*shape1=&myCircle;
  Shape*shape2=&myRectangle;
  renderShape(shape1);
  renderShape(shape2);
  return 0;
}

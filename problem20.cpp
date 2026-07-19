#include<iostream>
using namespace std;

class Rectangle{
  public:
  int width = 0, height = 0;

  virtual void display(){
    cout << width << " " << height << endl;
  }
};
class RectangleArea : public Rectangle{
public:
   void read_input(){
    cin >> width >> height;
   }
   void display(){
    int area = 1;
    area = width * height;
    cout << (area) ;
   }
};

int main(){
    RectangleArea* rec = new RectangleArea();
    rec->read_input();
    rec->display();
    delete rec;
    return 0;
}
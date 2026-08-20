#include<iostream>
using namespace std;

class Student{
  private:
    string name;
    int age;
  public:
    void input(){
        cout << "Enter the Name: "<< endl;
        cin >> name;
        cout << "Enter the age: " << endl;
        cin >> age;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main(){
    Student s;
    s.input();
    s.display();
    return 0;
}
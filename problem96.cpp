#include<iostream>
using namespace std;

class Student{
  private:
    string name;
    int age;
  public:
    Student(string s, int a){
        name = s;
        age = a;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main(){
    string name;
    int age;
    cin >> name >> age;
    Student s(name, age);
    s.display();
    return 0;
}
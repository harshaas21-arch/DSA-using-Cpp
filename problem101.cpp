#include<iostream>
using namespace std;

class Student{
   private: 
   string name;
   public:
   Student(string name){
    this->name = name;
    cout << "Constructor called" << endl;
   }
   Student(const Student& other){
    this->name = other.name;
    cout << "Copy constructor called" << endl;
   }
   void display(){
    cout << name << endl;
   }
};
int main(){
    Student s1("Batman");
    Student s2 = s1;

    s1.display();
    s2.display();
    return 0;  
}
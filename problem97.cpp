#include<iostream>
using namespace std;

class Student{
  private:
    string name;
    int age;
  public:
    Student(){
        name = "Unknown";
        age = 0;
    }
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
    Student s1;
    Student s2("Batman", 21);
    s1.display();
    s2.display();
    return 0;
}
#include<iostream>
using namespace std;

class Student{
    private: 
      string name;
    public:
      Student(string name){
        this->name = name;
        cout << "Constructor called for " << name << endl;
      }
      ~Student(){
        cout << "Destructor called for " << name << endl;
      }
};
int main(){
        {
        Student s1("Batman");
        Student s2("Joker");
    }

    cout << "Objects destroyed\n";
}
#include<iostream>
using namespace std;

class Student{
    private:
      string name;
      int age;
    public:
      void setName(string n){
        name = n;
      }
      void setAge(int a){
        if(a >= 0){
            age = a;
        }
      }

      string getName(){
        return name;
      }
      int getAge(){
        return age;
      }
};
int main(){
    Student s;

s.setName("Batman");
s.setAge(21);

cout << s.getName() << endl;
cout << s.getAge() << endl;
return 0;
}
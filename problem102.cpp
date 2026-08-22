#include<iostream>
using namespace std;

class Student{
  private:
    string name;
    static int count;
  public:
    static int getCount(){
       return count;
    }
    Student(string s){
        name = s;
        count++;
    }
    ~Student(){
        count--;
    }
};
int Student::count = 0;
int main(){
    {Student s1("Batman");
    Student s2("Joker");}
    cout << Student::getCount();
    return 0;
}
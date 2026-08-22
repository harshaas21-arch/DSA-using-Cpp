#include<iostream>
using namespace std;

class Person{
    protected:
        string name;
    public:
        void setName(string n){
            name = n;
        }
        void displayName(){
            cout << "Name: " << name << endl;
        }
};
class Student : public Person{
    private:
        int rollno;
    public:
        void setRollNo(int r){
            rollno = r;
        } 
        void displayStudent(){
            displayName();
            cout << "Roll No: " << rollno << endl;
        }
};
int main(){
    Student s;

s.setName("Batman");
s.setRollNo(101);

s.displayStudent();
return 0;
}
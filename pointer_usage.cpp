#include <iostream>
using namespace std;

int main(){
	int age = 22;
	
	int* ptr = &age;
	
	cout << "Value of age : " << age <<endl;
	cout << "Memory address of age: " << &age << endl;
	cout << "Value stored in ptr(address) " << ptr << endl;
	
	cout << "Value pointed to by the pointer :" << *ptr << endl;
	*ptr = 23;
	
	cout << "New value of age : " <<age<<endl;
	int* heaptr = new int(100);
	cout << "Heap address : " << heaptr << " contains " << *heaptr << endl;
	delete heaptr;
	heaptr = nullptr;
	
	return 0;
}
#include <iostream>
using namespace std;

void analyze_pointer(int* ptr){
	//Write the memory location pointed by the pointer to the console.
	cout << "Address of pointer: ";
	cout << ptr<<endl;


	//Write the value of the integer(which the pointer points to) to the console.
	cout << "Value of pointer: ";
	cout << *ptr<<endl;
	
}

int main() {
	int iValue = 7;
	int* pointer = &iValue;
	analyze_pointer(pointer);

	int* pointer2 = new int;
	*pointer2 = 3;
	analyze_pointer(pointer2);
	
	delete pointer2;
	return 0;
}

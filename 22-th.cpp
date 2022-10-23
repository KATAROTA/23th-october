#include <iostream>

using namespace std;

void func( int func_number) {
	func_number = 50;
	cout<<"func1:" << func_number << endl;
}


void func2( int *func_number) {
	*func_number = 50;
	cout<<"func2:" << *func_number << endl;
}

int main() {
	int func_number = 10;
	cout << func_number << endl;
	func(func_number);
	cout << func_number <<endl;
	func2(&func_number);
	cout << func_number <<func_number <<endl;
	return 0;
	
}

#include <iostream>

using namespace std;

int main () {
	int i = 10;
	cout << i << endl;
	int* pi = &i;
	cout << pi << endl;
	int** ppi = &pi;
	cout << ppi << endl;
	
	cout << *pi << endl;
	
	*pi = 20;
	cout << i << endl;
	return 0;

}


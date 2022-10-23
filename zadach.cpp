#include <iostream>

using namespace std;



void choiseSort(int* mas, int n){
	for (int i =0; i<n; i++){
		int min = mas[i];
		for (int j=i+1; j<n; j++){
			if (min < mas[j]) {
				min = mas[j];
			}
			
		}
		mas[i] = min;
	}
}
int main() {
	
}


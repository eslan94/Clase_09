#include <iostream>
using namespace std;

void fibonacci(int penultimo, int ultimo, int n);

int main(){
	int n;
	cout<<"Ingrese la cantidad de elementos a mostrar: ";
	cin>>n;
	fibonacci(0, 1, n);
	return 0;
}

void fibonacci(int penultimo, int ultimo, int n){
	int actual;
	cout<<penultimo;
	if(n>1){
		actual = penultimo + ultimo;
		n--;
		cout<<", ";
		fibonacci(ultimo, actual, n);
	}
	
}
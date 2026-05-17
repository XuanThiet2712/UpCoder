#include <iostream>
using namespace std ; 
//De ko yeu cau dslk
int main(){
	int n ; cin >> n ; 
	int *arr = new int[n];
	for (int i = 0 ; i < n ; i++){
		cin >> *(arr + i) ;
	}
	int sum = 0 ; 
	for (int i = 0 ; i < n ; i++){
		sum += *(arr+i) ; 
	}
	cout << sum ; 
	delete[] arr ; 
}

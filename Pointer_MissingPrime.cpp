#include <iostream>
using namespace std; 
bool isPrime(int n){
	if (n < 2 ) return false ; 
	for(int i=2;i<n;i++){
		//TODO
		if (n % i == 0) return 0 ; 
	}
	return 1 ; 
}

int main(){
	int m;
	int M ;
	cin >> m >> M ; 
	int *a = new int[M - m ] ;
	int n = 0 ;
	for(int i=m;i<=M;i++){
		if(isPrime(i)){
			a[n++] = i ;
		}
	}
	for(int i=0;i<n;i++){
		cout << a[i] <<" " ; 
	}

	delete[] a ;
}

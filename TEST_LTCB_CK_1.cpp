#include <iostream>
using namespace std ; 
bool isPrime(int n){
	for(int i = 2 ; i < n ; i++){
		if(n%i == 0 ) return 0 ; 
	}
	return n > 1 ;
}

int tongCS(int n){
	int sum = 0 ; 
	while(n > 0){
		sum += n % 10 ; 
		n/=10;
	}
	return sum ; 
}
int main(){
	int a , b ; 
	cin >> a >> b ; 
	for (int i = a ; i <= b ; i++){
		if(isPrime(tongCS(i))) cout << i << " " ;
	}
}

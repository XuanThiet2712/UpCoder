#include <iostream>
using namespace std ; 
int main(){
	int n ; cin >> n ;
	int max1 = 0, min1 = 9; 
	while(n > 0){
		int x = n % 10 ; 
		if(x > max1 ) max1 = x ; 
		if(x < min1 ) min1 = x ; 
		n /= 10 ; 
	}
	cout << max1 + min1 ; 
	
}

#include <iostream>
using namespace std ; 


int T(int n){
	if(n == 1 || n == 2 ) return 1 ; 
	int res = 0 ; 
	for (int i = 1 ; i < n ; i++){
		res += T(n-i) ;
	}
	return res ;
}

int main(){
	int n ; 
	cin >> n ;
	cout << T(n) ; 
}

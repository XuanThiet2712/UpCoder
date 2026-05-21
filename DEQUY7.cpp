#include <bits/stdc++.h>
using namespace std ; 
int f(int n){
	if ( n < 3) {
		return 1;
	}
	return f(n-1) + f(n-2) ;
}
int main(){
	int n ; cin >> n ; 
	for (int i = 1 ; i <= n ; i++){
		cout << f(i) << " " ; 
	}
}

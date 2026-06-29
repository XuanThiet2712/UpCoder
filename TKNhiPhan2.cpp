#include <iostream>
using namespace std ; 
int main(){
	int n , x ; cin >> n >> x ; 
	int a[n];
	for(int &k : a ) 
		cin >> k ; 
	bool check = true ; 
	for(int i = 0 ; i < n ; i++ ){
		if(a[i] == x ) cout << i << " " , check = false ; 
	}
	if(check) cout << -1 ;
}

#include <bits/stdc++.h>
using namespace std ; 
int C(int n){
	if(n == 0 || n == 1) return 1 ; 
	int kq = 0 ; 
	for(int i = 0 ; i < n ; i++){
		kq += C(i) * C(n-1-i);
	}
	return kq ; 
}
int main(){
	int n ; 
	while(cin >> n){
		cout << C(n) << endl ;
	}
}

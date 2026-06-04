#include <bits/stdc++.h>
using namespace std ; 
int main(){
	int n , k ; 
	cin >> n >> k ; 
	int a[n] ; 
	for (int &x : a)
		cin >> x ;
	for(int i = 0 ; i < n ; i++){
		if(i == 0 && a[i] == 0 && a[i+1] == 0 ){
			a[i] = 1 ; 
			k-- ; 
		}
		else if(i == n-1 && a[i] == 0 && a[i-1] == 0 ){
			a[i] = 1 ; 
			k--;
		}
		else if(a[i] == 0 && a[i+1] == 0 && a[i-1] == 0 ){
			a[i] = 1 ; 
			k--;
		}

	}
	cout << (k <= 0 ? "YES" : "NO") ; 
}

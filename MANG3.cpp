#include <iostream>
#include <cmath>
using namespace std; 

bool So9P(int n){
	int can = sqrt(n);
	return can * can == n ; 
}
bool SNT(int n){
	for (int i = 2 ; i < n ; i++){
		if (n % i == 0) return false ;
	}
	return n > 1 ; 
}
int main(){
	int n ; 
	cin >> n ; 
	int a[n] ; 
	int sum = 0 ; 
	for (int i = 0 ;  i < n ; i++){
		cin >> a[i] ;
	}
	for(int i=0;i<n;i++){
		if(So9P(a[i])) sum += a[i] ;
	}
	cout << sum ; 

	
}

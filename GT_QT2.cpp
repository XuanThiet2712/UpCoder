#include <iostream>
using namespace std;
int Find(int a[] , int n , int x ,int i ){
	if(a[i-1] == x ) return i ; 
	if(i > n ) return -1 ; 
	return Find(a , n , x , i + 1 ) ;
}
int main(){
	int n , k ;
	cin >> n >> k ; 
	int a[n] ; 
	for (int &x : a )
		cin >> x ;
	cout << Find(a , n , k , 1) ; 
}

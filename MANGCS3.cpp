#include <iostream>
using namespace std ; 
int main(){
	int a[100];
	int n = 0 ; 
	int x ;
	cin >> x ;
	while(cin >> a[n]){
		n++;
	}
	for(int i=0;i<n;i++){
		if(i >= x ){
			a[i] = a[i+1] ; 
		}
	}
	
	for(int i=0;i<n-1;i++){
		cout << a[i] << " " ; 
	}
}

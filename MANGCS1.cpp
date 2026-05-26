#include <iostream>
using namespace std ; 
int main(){
	int a[100];
	int n = 0 ; 
	int x , value ; 
	cin >> x >> value ; 
	while(cin >> a[n]){
		if(n == x){
			a[n+1] = a[n] ;
			a[n] = value ;
			n++;
		}
		n++;
	}
	for(int i=0;i<n;i++){
		cout << a[i] << " " ; 
	}
}

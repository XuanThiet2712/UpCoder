#include <iostream>
using namespace std ; 
int main(){
	int n , r ; cin >> n >> r ; 
	int a[n] , count = 0 , x = 0 ;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i] ; 
		if(a[i] >= r ) {
			count++;
			if(a[i] > a[x])
				x = i ;
		}
	}
	if(count == 0 ) cout << -1 ;
	else cout << count << " " << x + 1 ; 

}

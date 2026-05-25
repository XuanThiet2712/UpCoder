#include <iostream>
using namespace std ; 
int main(){
	int k ,mask , q ; 
	cin >> k >> mask >> q; 
	int a[k] ;
	for (int i = 0 ; i < k ; i++){
		a[i] = mask % 2 ; 
		mask /= 2 ; 
	}

	while(q--){
		bool check = 1 ; 
		for(int i=0;i<k;i++){
			if(a[i] != 0 ){
				a[i] = 0 ;
				cout << i << " " ;
				check = 0 ; 
				break ; 
			}
		}
		if(check) cout << -1 << " " ; 
	}

}

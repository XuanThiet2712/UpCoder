#include <iostream>
using namespace std ; 
int main(){
	int a[300];
	int n = 0 ; 
	int tmp ; 
	while(cin >> tmp){
		int check = 0 ; 
		for(int i = 0 ; i < n ; i++){
			if(tmp == a[i]) check = 1 ;  
		}
		if(check == 0 ){
			a[n] = tmp ; 
			n++;
		}
		
	}
	for (int i = 0 ; i < n ; i++ ) 
		cout << a[i] << "  " ;
}

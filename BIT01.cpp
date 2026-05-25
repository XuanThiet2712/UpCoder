#include <iostream>
using namespace std ; 

int main(){
	int a[64] ;
	for(int i=0;i<64;i++){
		a[i] = 0 ;
	}
	int q , x ,choice , isOn = 0  ;
	cin >> q ; 
	while(q--){
		cin >> choice >> x ; 
		switch (choice) {
		case 1:
			if(a[x] != 1 ){
				a[x] = 1 ; 
				isOn++;
			}
			break;
		case 2:
			if(a[x] == 1 ){
				a[x] = 0 ; 
				isOn--;
			}
			break;
		case 3:
			if(a[x] == 1 ){
				a[x] = 0 ; 
				isOn--;
			} 
			else {
				a[x] = 1 ; 
				isOn++;
			}			
			break;
		case 4:
			cout << (a[x] == 1 ? "ON" : "OFF") << endl ; 
			break;
		}
	}
	cout<<isOn; 
}

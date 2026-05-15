#include <iostream>
using namespace std ; 
int main(){
	int n ; 
	bool isDX = true ; 
	cin >> n ; 
	int *a = new int[n];
	for(int i=0;i<n;i++){
		cin >> *(a+i) ;
	}
	for(int i=0;i<n/2;i++){
		if(a[i] != a[n-1-i]){
			if(isDX){
							cout << "mang khong doi xung" ;
						isDX = false ;
			}
	
			cout <<endl<<a[i] << " " << a[n - 1 - i] ;
		}
	}
	delete[] a;
	if(isDX)
	cout << "mang doi xung" ; 

}

#include <iostream>
using namespace std ; 
int main(){
	int m = -99999999 ; 
	int x ; 
	while(cin >> x){
		if (x > m ) m = x ; 
	}
	cout << m ; 
}

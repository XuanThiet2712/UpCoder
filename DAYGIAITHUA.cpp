#include <iostream>
using namespace std ;  
long FAC(int n);
int main(){
	int n;
	cin >> n;
	cout << FAC(n);
	return 0;
}

long FAC(int n){
	if(n == 0 || n == 1 ) return 1 ; 
	return n * FAC(n - 1) ;
}

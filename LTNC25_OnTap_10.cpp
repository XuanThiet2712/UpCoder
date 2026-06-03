#include <iostream>
#include <fstream>
using namespace std ; 
bool isPrime(int n){
	for(int i = 2 ; i < n ; i++){
		if(n % i == 0 ) return 0 ;
	}
	return n > 1 ; 
}
int main(){
	int x ;
	ofstream fout("output.txt") ; 
	while(cin >> x){
		if(isPrime(x)) fout << x << " " ; 
	}
	fout.close();
}

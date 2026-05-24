#include <bits/stdc++.h>
using namespace std ;

int tongUoc(int n){
	int sum = 0 ; 
	for (int i = 1 ; i <= n ; i++ ){
		if(n % i == 0 ) 
			sum += i ; 
	}
	return sum ; 
}

int main(){
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	int n ; 
	int gcd = 0 ; 
	int x = 0 ; 
	while(fin >> n){
		if(gcd < tongUoc(n)){
			gcd = tongUoc(n) ; 
			x = n ;
		}
	}
	cout << x ; 
}

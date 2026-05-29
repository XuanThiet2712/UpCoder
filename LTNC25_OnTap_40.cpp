#include <bits/stdc++.h>
using namespace std ;
int main(){
	string s , tmp ; 
	getline(cin , s) ;
	stringstream ss(s) ; 
	int count = 0 ; 
	while(ss >> tmp ){
		count++;
	}
	cout << count ; 
	
}

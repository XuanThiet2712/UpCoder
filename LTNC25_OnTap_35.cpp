#include <bits/stdc++.h>
using namespace std ; 
int main(){
	string s ;
	getline(cin , s ) ;
	for(char c : s){
		if(islower(c)) cout << (char)toupper(c) ; 
		else if(isupper(c)) cout << (char)tolower(c) ;
		else cout << c ; 
	}
	
}

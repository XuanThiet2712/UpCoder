#include <bits/stdc++.h>
using namespace std ; 
int main(){
	string s ;
	getline(cin , s ) ;
	string tmp = "";
	string tmc = "";
	for(char c : s ){
		if(c != ' ') tmp += tolower(c);
	}
	for(int i = s.size()-1 ; i >= 0 ; i--){
		if(s[i] != ' ') tmc += tolower(s[i]);
	}
	cout << (tmp == tmc ? "YES" : "NO") ;
}

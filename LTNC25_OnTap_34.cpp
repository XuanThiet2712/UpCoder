#include <bits/stdc++.h>
using namespace std ; 
int main(){
	string s ;
	getline(cin , s ) ;
	list<char> l ;
	for(char c : s){
		l.push_back(c);
	}
	l.unique();
	for(char c : l ){
		cout << c ;
	} 
	
}

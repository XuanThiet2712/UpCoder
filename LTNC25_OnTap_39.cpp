#include <bits/stdc++.h>
using namespace std ;
int main(){
	string s, p ; 
	getline(cin , s ) ;
	getline(cin , p ) ;
	size_t pos ; 
	while((pos = s.find(p)) != string::npos){
		s.erase(pos,p.length());
	}
	cout << s ; 
}

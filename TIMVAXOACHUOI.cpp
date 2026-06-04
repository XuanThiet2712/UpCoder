#include <bits/stdc++.h>
using namespace std ; 
int main(){
	string s , t ; 
	getline(cin , s ) ;
	getline(cin , t ) ;
	while(s.find(t) != string::npos){
		s.erase(s.find(t) , s.find(t) + s.size() - 1 ) ; 
	}
	cout << s ; 
}

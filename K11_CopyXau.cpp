#include <bits/stdc++.h>
using namespace std ; 
int main(){
	string s ; 
	getline(cin , s); 
	int n , m ;
	cin >> n >> m ; 
	string sc = s.substr( n , m ) ;
	cout << sc ; 
}

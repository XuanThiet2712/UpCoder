#include <bits/stdc++.h>
using namespace std ; 
int main(){
	string s ;
	getline(cin , s ) ;
	stringstream ss(s);
	string tmp ; 
	while(getline(ss , tmp , '_')){
		cout << tmp << " " ; 
	}
}

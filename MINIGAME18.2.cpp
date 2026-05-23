#include <bits/stdc++.h>
using namespace std ; 
int main(){
	string s ; 
	getline(cin , s );
	stringstream ss(s);
	string tmp ; 
	int sum = 0 ; 
	while(getline(ss ,tmp , ',')){
		cout << tmp << endl ;
		sum += stoi(tmp);
	}
}

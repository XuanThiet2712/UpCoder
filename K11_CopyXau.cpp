#include <bits/stdc++.h>
using namespace std ; 
int main(){
	string s ; 
	getline(cin , s); 
	int n , m ;
	cin >> n >> m ; 
	if(n < 0 || m >= s.size()) 
		cout << "gioi han khong dung" ; 
	else
	cout << s.substr( n , m - n + 1) ;

}

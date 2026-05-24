#include <bits/stdc++.h>
using namespace std ; 
int main(){
	string s1 , s2 ; 
	getline(cin , s1) ; 
	getline(cin , s2) ; 
	int count = 0 ; 
	size_t pos = s2.find(s1 , 0) ; 
	while(pos != string::npos){
		count++;
		pos = s2.find(s1 , pos + 1 );
	}
	cout << count ; 
	
}

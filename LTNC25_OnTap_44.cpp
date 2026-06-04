#include <bits/stdc++.h>
using namespace std ;
int main(){
	string s ; cin >> s ;
	int count = 0 ; 
	for (int i = 0 ; i < s.size() ; i++){
		for(int j = 1 ; j <= s.size() ;  j++){
			if(i + j > s.size()) break ; 
			string tmp = s.substr(i , j );
			string rev = tmp;
			reverse(rev.begin(), rev.end());
			if( tmp == rev)
				count++ ; 
		}
	}
	cout << count ; 
}

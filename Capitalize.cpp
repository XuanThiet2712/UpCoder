#include <bits/stdc++.h>
using namespace std ; 
int main(){
	string s ; 
	while(cin >> s ){
		for(int i = 0 ; i < s.size() ; i++){
			if(i == 0 ) s[0] = toupper(s[0]);
			else s[i] = tolower(s[i]);
		}
		cout << s << " " ; 
	}


}

#include <bits/stdc++.h>
using namespace std ; 
int main(){
	int n ; cin >> n ; 
	vector<string> v;
	string s ; 
	for (int i = 0 ; i < n ; i++){
		cin >> s ; 
		if(find(v.begin() , v.end() , s) == v.end()) cout << "OK\n" ;
		else cout << s << count(v.begin(),v.end() , s) << endl ; 
		v.push_back(s);
	}
	
}

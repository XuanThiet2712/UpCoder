#include <bits/stdc++.h>
using namespace std;  
int main(){
	vector<int> v ; 
	string s ; 
	getline(cin , s )  ;
	stringstream ss(s) ; 
	int count = 0 ;
	int x , y = 0 ; 
	string tmp ; 
	while(ss >> tmp){
		count ++ ; 
		if(count == 1) x = stoi(tmp) ;
		else y = stoi(tmp);
	}
	int k ; 
	while(cin >> k){
		v.push_back(k);
	}
	if(x == -1){
		v.erase(v.begin() , v.end()) ;
	}
	else if(count == 1) v.erase(v.begin() + x );
	else v.erase(v.begin() + x , v.begin() + y);
	if(v.empty()){
		cout << "empty" ;
		return 0;
	}
	
//	for(auto x : v) cout << x << " " ; 
	for(vector<int>::iterator it = v.begin() ; it != v.end() ; it++ )
		cout << *it <<" " ;

	
}

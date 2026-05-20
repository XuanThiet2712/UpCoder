#include <bits/stdc++.h>
using namespace std;  
int main(){
	vector<int> v ; 
	int x ; 
	while(cin >> x){
		v.push_back(x);
	}
//	for(auto x : v) cout << x << " " ; 
	for(vector<int>::iterator it = v.begin() ; it != v.end() ; it++ )
		cout << *it <<" " ;
	cout << endl; 
//	for(auto x : v) cout << x << " " ; 
	for(vector<int>::reverse_iterator it = v.rbegin() ; it != v.rend() ; it++ )
		cout << *it <<" " ;

}

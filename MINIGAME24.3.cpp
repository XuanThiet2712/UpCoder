#include <bits/stdc++.h>
using namespace std;  
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin.tie(0);
	int n , q , x ; cin >> n ; 
	
	vector<int> v(n) ; 
	for(int &x : v){
		cin >> x ; 
	}
	cin >> q ;
	while(q--){
		cin >> x ; 
		auto it = lower_bound(v.begin() , v.end() , x);
		cout << (*it == x ? "Yes " : "No ") << it + 1 - v.begin() << endl ; 
	}
	//lower_bound O(logn) - > find() O(n)
}

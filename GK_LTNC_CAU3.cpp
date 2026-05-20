#include <bits/stdc++.h>
using namespace std ; 
bool isSquareNumber(int x){
	int can = sqrt(x) ; 
	return x == can * can ; 
}
int main(){
	int n , m ; 
	cin >> n >> m ; 
	vector<int> v1(n) ;
	vector<int> v2(m) ;
	for (int &x : v1) cin >> x ; 
	for (int &x : v2) cin >> x ;
	auto it = remove_if(v1.begin() , v1.end() , isSquareNumber ) ;
	v1.erase(it , v1.end());
	it = remove_if(v2.begin() , v2.end() , isSquareNumber ) ;
	v2.erase(it , v2.end()) ; 
	sort(v1.begin() , v1.end());
	sort(v2.begin() , v2.end());
	vector<int> res(v1.size() + v2.size()) ; 
	merge(v1.begin(),v1.end(),v2.begin(),v2.end(),res.begin());
	for(int x : res) cout << x <<" " ;
	res.clear();
	for(int x : v1){
		if((find(v2.begin() , v2.end() , x )) != v2.end()){
			res.push_back(x);
		}		
	}
	cout << endl ; 
	for(int x : res) cout << x <<" " ; 
}

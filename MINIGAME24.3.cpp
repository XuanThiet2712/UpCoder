#include <bits/stdc++.h>
using namespace std;  
int main(){
	int n ; cin >> n ; 
	vector<int> v(n) ; 
	for(int &x : v){
		cin >> x ; 
	}
	int q ; cin >> q ;
	while(q--){
		int x ; cin >> x ; 
		auto it = find(v.begin() , v.end() , x);
		if(it != v.end()){
			cout << "YES " << (it + 1 - v.begin()) << endl ;  
		}
		else{
			it = find_if(v.begin() , v.end() , [x](int a){
				return a > x ;
			});
			cout << "NO " << (it + 1 - v.begin())  << endl ;
		}
	}
}

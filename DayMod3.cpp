#include <bits/stdc++.h>
using namespace std ; 
int main(){
	int n , m ;  cin >> n; 
	vector<int> v(n) ; 
	for(int &x : v){
		cin >> x ; 
	}
	cin >> m ; 
	sort(v.begin() , v.end() ,[](int a , int b){
		int a_mod = abs(a) % 3 ; 
		int b_mod = abs(b) % 3 ; 
		if (a_mod == 0 ) a_mod = 3 ; 
		if (b_mod == 0 ) b_mod = 3 ; 
		if (a_mod != b_mod ) return a_mod < b_mod ; 
		return a < b ; 
	});
	if(m < n) cout << v[m] ; 
	else cout << "Khong Tim Thay" ;
}

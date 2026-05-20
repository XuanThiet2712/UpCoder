#include <bits/stdc++.h>
using namespace std;  
int main(){
	int n ; cin >> n ;
	vector<int> v(n);
	for(int &x : v) cin >> x  ;
	double sum = 0.0 ;
	for(int x : v)	sum += x ; 
	double valueTB = sum /= v.size() ; 
	int sl = count_if(v.begin(),v.end(),[valueTB](int x){
		return x > valueTB ; 
	} ) ;
	cout << sl << endl ; 
	if(sl == 0 ) {
		cout << -1 ;
		return 0; 
	}

	for(int x : v){
		if(x > valueTB) cout << x << " " ; 
	}

}

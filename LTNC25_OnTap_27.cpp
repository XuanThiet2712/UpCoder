#include <bits/stdc++.h>
using namespace std ; 
bool isPrime(int n ){
	for(int i = 2 ; i <= sqrt(n) ; i++ )
		if(n % i == 0) return 0 ; 
	return n > 1 ; 
}

int main(){
	vector<int> v ; 
	int x ; 
	while(cin >> x){
		v.push_back(x);
	}
	v.erase(remove_if(v.begin(),v.end(),isPrime), v.end()) ; 
	sort(v.begin(), v.end());
	for(int x : v){
		cout << x << " "  ;
	}
}

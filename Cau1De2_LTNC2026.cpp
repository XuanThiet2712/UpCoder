#include <bits/stdc++.h>
using namespace std;
vector<int> kq ; 
int S(int n , int k){
	kq.push_back(n);
	if(k == 1 ) return 1 * n ; 
	vector<int> v ; 
	while(n > 0){
		v.push_back(n%10);
		n /= 10 ; 
	}
	int res ;
	if(!v.empty()) res = 1 ;
	else res = 0 ; 
	for (int x : v)
		res *= x ; 
	return S(res , k - 1  ); 
}

int main(){
	int n , k ; 
	cin >> n >> k ; 
	S(n,k);
	for(int x : kq)
		cout << x << " " ; 
}

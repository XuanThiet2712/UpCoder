#include <bits/stdc++.h>
using namespace std;  
int main(){
	vector<int> v ; 
	int x ; 
	while(cin >> x){
		v.push_back(x);
	}
	v.erase(remove_if(v.begin() , v.end() ,[](int x){
		return (int)sqrt(x) == sqrt(x) || x % 2 == 1 ; 
	}) , v.end());
	sort(v.begin(),v.end());
	for (int x : v) cout << x << " " ;
}

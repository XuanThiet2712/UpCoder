#include <bits/stdc++.h>
using namespace std ; 
int main(){
	vector<int> v ; 
	int x ; 
	while(cin >> x){
		v.push_back(x);
	}
	cout << count_if(v.begin(),v.end(),[](int x){
		return (int)sqrt(x) == sqrt(x) ; 
	});
}

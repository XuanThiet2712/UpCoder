#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std; 
struct NV{
	string name ; 
	int point ;  
};

int main(){
	int n ; cin >> n ; 
//	vector<NV> v ; 
	vector<NV> v(n) ; 
	for(auto &x : v){
		cin >>x.name >> x.point ; 
	}
//	NV x ; 
//	while(n--){
//		cin >> x ;  
//		v.push_back(x);
//	}
	sort(v.begin() , v.end() , [](NV a , NV b ){
		return	a.point > b.point ; 
	});
	for (NV nv : v){
		cout << nv.name << '\n' ; 
	}
	
}

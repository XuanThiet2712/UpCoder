#include <bits/stdc++.h>
using namespace std ; 
int main(){
	int n ; cin >> n ; 
	int x ; 
	list<int> l ; 
	for (int i = 0 ; i < n ; i++){
		cin >> x ; 
		l.push_back(x);
	}
	l.reverse();
	for (int x : l){
		cout << x << " " ; 
	}
}

#include <bits/stdc++.h>
using namespace std;
int S(int n){
	if(n == 0) return 0 ; 
	return n%10 + S(n/10); 
}

int main(){
	int n ; cin >> n ; 
	cout << S(n) ; 
}

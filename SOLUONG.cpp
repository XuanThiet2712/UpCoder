#include <bits/stdc++.h>
using namespace std ;
int main(){
	string s ; 
	cin >> s ; 
	int a[256] = {0};
	for(char c : s){
		a[(int)c]++;
	}
	for(char c = 'a' ; c <= 'z' ; c++){
		if(a[c] > 0 ){
			cout << c << " " << a[c] << endl ; 
		}
	}
	
}

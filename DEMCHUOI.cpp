#include <bits/stdc++.h>
using namespace std ; 
int main(){
	int n ; cin >> n ; 
	string A , s; cin >> A ; 

	while(n--){
		int count = 0 ; 
		cin >> s ;
		size_t pos = s.find(A);
		while(pos != string::npos){
			count++;
			pos = s.find(A , pos + 1 );
		}
		cout << count << endl; 
	}

}

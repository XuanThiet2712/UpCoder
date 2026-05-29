#include <bits/stdc++.h>
using namespace std;
int main() {
	string s , tmp ;
	getline(cin, s);
	stringstream ss(s);
	while(ss >> tmp){
		for(int i = 0 ; i < tmp.size() ; i++){
			if(i == 0 ) tmp[0] = toupper(tmp[0]);
			else tmp[i] = tolower(tmp[i]) ; 
		}
		cout << tmp << " " ; 
	}	
	return 0;
}

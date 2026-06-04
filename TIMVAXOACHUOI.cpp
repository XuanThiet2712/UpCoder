#include <bits/stdc++.h>
using namespace std;
int main(){
	string s , t;
	getline(cin,s);
	getline(cin,t);
	size_t pos;
	while((pos = s.find(t)) != string::npos){
		s.erase(pos,t.size());
		size_t _pos ; 
		while((_pos = s.find("  ")) != string::npos){
			s.replace(_pos,2, " ");
		}
	}
	cout << s;
	return 0;
}

#include <bits/stdc++.h>
using namespace std ; 
string::iterator stringpbrk(string &s , const string& accept);
int main(){
	string s ; 
	string res = "" ; 
	while(getline(cin , s)){
		stringstream ss(s);
		string tmp ; 
		while(ss >> tmp){
			if(stringpbrk(tmp , "bdfhkt" ) == tmp.end()){
				if(res.size() < tmp.length()) res = tmp ;
			}
		}
	}
	cout << res ; 
}
string::iterator stringpbrk(string &s , const string& accept){
	size_t pos = s.find_first_of(accept);
		
	if(pos == string::npos)
		return s.end();
		
	return s.begin() + pos;

}

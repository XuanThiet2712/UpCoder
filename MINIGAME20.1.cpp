#include <bits/stdc++.h>
using namespace std ; 
int main(){
	int n ; cin >> n ; 
	vector<string> v;
	string s ; 
	for (int i = 0 ; i < n ; i++){
		cin >> s ; 
		auto it =  find(v.begin() , v.end() , s ) ; 
		if (it == v.end()) {
			cout << "OK\n" ; 
			v.push_back(s);
		}
		else {
			int count = 1 ; 
			string str ; 
			while(true){
				str = s + to_string(count);
				if(find(v.begin(), v.end() , str ) == v.end()){
					cout <<str<<endl;
					v.push_back(str);
					break;
				}
				count++;
			}
		}
	}
	
}

#include <bits/stdc++.h>
using namespace std; 
int main(){
	string s ; 
	vector<string> hoten ; 
	while(cin >> s){
		hoten.push_back(s);
	}
	cout << "Ho: "<<hoten.front()<<endl; 
	if(hoten.size() > 2){
		cout << "Lot: " ; 
		for(int i = 1 ; i < hoten.size()-1 ;i++ ){
			cout <<hoten[i]<<" " ;
		}
		cout << endl ; 
	}
	cout << "Ten: "<<hoten.back();
}

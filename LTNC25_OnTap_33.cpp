#include <bits/stdc++.h>
using namespace std ; 
int main(){
	string s ;
	getline(cin , s ) ;
	stringstream ss(s);
	string tmp ;
	string vowel = "aeiou";
	int count = 0 ;
	while(ss >> tmp){
		if(find(vowel.begin() , vowel.end() , tmp[tmp.size()-1]) != vowel.end()){
			count++;
		}
	}
	cout << count ; 
	
}

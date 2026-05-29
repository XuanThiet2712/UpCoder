#include <bits/stdc++.h>
using namespace std ; 
int main(){
	string s ;
	getline(cin , s ) ;
	string vowel = "aeiou";
	int count = 0 ;
	for(char c : s){
		if(find(vowel.begin() , vowel.end() , tolower(c)) != vowel.end()){
			count++;
		}
	}
	cout << count ; 
	
}

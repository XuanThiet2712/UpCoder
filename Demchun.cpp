#include <bits/stdc++.h>
using namespace std ; 
int main(){
	string s ;
	getline(cin , s ) ;
	int ct = 0, ch  = 0; 
	for(char c : s){
		if(c >= 'a' && c <= 'z') ct++;
		else if(c >= 'A' && c <= 'Z') ch++;
	}
	cout << "Chữ hoa: "<<ch << endl ;
	cout << "Chữ thường: "<<ct ;
}

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
using namespace std;
int main(){
	string s , tmp ;
	getline (cin , s ) ; 
	stringstream ss(s) ; 
	stack<string> st ;
	while(ss >> tmp){
		st.push(tmp);
	}
	while(!st.empty()){
		cout << st.top() <<" "; 
		st.pop() ; 
	}
}

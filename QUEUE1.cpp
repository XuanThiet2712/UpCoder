#include <iostream>
#include <queue>
using namespace std; 
int main(){
	string s ; cin >> s ; 
	queue<char> q; 
	for (char c : s ){
		if(c != '*') q.push(c) ; 
		else if (c == '*' && !q.empty()) {
			cout << q.front() ;
			q.pop() ; 
		}
	}
}

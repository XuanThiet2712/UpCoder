#include <iostream>
#include <queue>
using namespace std ; 
int main(){
	string s = "abcdef";
	queue<char> q ; 
	int n ; cin >> n ; 
	for(int i=0;i<s.size() ; i++){
		q.push(s[i]);
	}
	while(n--){
		q.push(q.front());
		q.pop();
	}
	while(!q.empty()){
		cout << q.front() ; 
		q.pop() ; 
	}
}

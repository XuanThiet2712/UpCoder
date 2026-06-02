#include <iostream>
#include <stack>
#include <queue>
using namespace std ; 
int main(){
	int n , k ; 
	cin >> n >> k ; 
	int a[n] ; 
	queue<int> q ; 
	for (int i = 0 ; i < n ; i++)
		cin >> a[i] ,
		q.push(a[i]) ; 
	
	while (k--){
		q.push(q.front());
		q.pop();
	}
	while(!q.empty())
		cout << q.front() << " ", 
		q.pop() ; 
	
}

#include <iostream>
#include <list>
using namespace std ; 
int main(){
	int x ; 
	list<int> li ; 
	while(cin >> x )
		li.push_back(x);
	li.sort();
	for (int k : li)
		cout << k << " " ; 
}

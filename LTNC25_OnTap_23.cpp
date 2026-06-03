#include <bits/stdc++.h>
using namespace std ;
int main(){
	int n , q , x , k , choice ; 
	cin >> n >> q ;
	vector<int> v(n);
	for (int &x : v)
		cin >> x;
	while(q--){
		cin >> choice ; 
		switch(choice){
		case 1 : 
			cin >> x >> k ; 
			v.insert(v.begin() + k , x ) ;
			break ;
		
		case 2 :
			cin >> k ; 
			v.erase(v.begin() + k ) ;
			break ; 
		case 3 : 
			cin >> k ; 
			cout << v[k] << " " ; 
			break ;
		}
	}
//	for (vector<int>::iterator it = v.begin(); it != v.end() ; it++)
//		cout << *it << " " ; 
//	
}

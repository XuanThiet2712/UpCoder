#include <bits/stdc++.h>
using namespace std ; 
int main(){
	int n , q; cin >> n >> q ;
	vector<int> v(n);
	for (int &x : v) cin >> x ; 
	while(q--){
		int choice ; cin >> choice ;
		int x , y ; 
		switch (choice) {
		case 1:
			cin >> x >> y ; 
			if(x > v.size()) v.push_back(y);
			else
			v.insert(v.begin() + x , y ) ;
			break;
		case 2:
			cin >> x ;
			v.erase(remove(v.begin(), v.end(), x), v.end());
			break;
		case 3:
			cin >> x ; 
			if(x < v.size()) cout << v[x] << endl ; 
			else cout << "ERROR\n";
		}
	}
	return 0 ; 

}

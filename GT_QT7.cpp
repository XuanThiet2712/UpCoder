#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n , r ; 
	cin >> n >> r ; 
	int k[n] , v[n] ; 
	vector<int> p , p1 ; 
	for(int &x : k )
		cin >> x ; 
	for(int &x : v)
		cin >> x ; 
	int MAX = 0 ; 
	for(int i = 0 ; i < n ; i++){
		int tl = v[i] , tg = k[i]; 
		p.push_back(i+1);
		for(int j = i + 1  ; j < n ; j++){
			if(tg + k[j] > r ) continue ; 
			tg += k[j] ;
			tl += v[j] ;
			p.push_back(j+1) ; 
		}
		if (tl > MAX ) MAX = tl , p1 = p ; 
		p.clear();
	}
	cout << MAX << endl ; 
	if(p1.empty()) cout << -1 ; 
	else{
		for(int x : p1)
			cout << x << " " ; 
	}
	
}

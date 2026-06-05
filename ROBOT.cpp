#include <bits/stdc++.h>
using namespace std ; 
int n , MAX(0) ; 
string snp = "" ; 
int a[105][105] ;
int dx[] = {1 , 0 };
int dy[] = {0 , 1 };
void Try(int x, int y){
	if(x == n && y == n){
		int tmp = stoi(snp , nullptr , 2) ;
		if(tmp > MAX) MAX = tmp ; 
		return ; 
	}
	for(int i = 0 ; i < 2 ; i++){
		int xx = x + dx[i] ; 
		int yy = y + dy[i] ; 
		if (xx >= 1 && xx <= n && yy >= 1 && yy <= n){
			snp += a[xx][yy] + '0';
			Try(xx,yy);
			snp.pop_back();
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n ; 
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			cin >> a[i][j] ; 
		}
	}
	snp+=to_string(a[1][1]);
	Try(1,1);
	
	cout << MAX ; 
}

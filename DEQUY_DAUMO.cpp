#include <bits/stdc++.h>
using namespace std ; 
struct ToaDo{
	int x , y ; 
};
int m , n , res(-1) , tong(0);
int a[100][100] ; 
vector<ToaDo> duongDi , ketQua ; 
int dx[] = {1 , 0};
int dy[] = {0 , 1};

void Try(int x , int y){
	if(x == m && y == n ){
		if(tong > res)
			res = tong , 
			ketQua = duongDi ;
		
	}
	else{
		// chay vong for 2 duong di 
		for (int i = 0 ; i < 2 ; i++){
			int xx = x + dx[i] ; 
			int yy = y + dy[i] ; 
			if(xx >= 1 && x <= m && yy >= 1 && yy <= n){
				tong += a[xx][yy] ; 
				duongDi.push_back({xx , yy });
				Try(xx , yy ) ; 
				tong -= a[xx][yy] ;
				duongDi.pop_back();
			}
		}
	}
}
int main(){
	cin >> m >> n ;
	for (int i = 1 ; i <= m ; i++){
		for (int j = 1 ; j <= n ; j++){
			cin >> a[i][j];
		}
	}
	tong += a[1][1];
	duongDi.push_back({1,1});
	Try(1,1);
	cout << res << endl ; 
	for (auto x : ketQua){
		cout << x.x << " " << x.y << endl ; 
	}
}

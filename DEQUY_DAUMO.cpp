#include <bits/stdc++.h>
using namespace std ; 
struct ToaDo{
	int x , y ; 
	ToaDo(int a , int b ) : x(a) , y(b) {} 
};
int m , n , res(INT_MIN) , tong;
int a[20][20] ; 
vector<ToaDo> duongDi , ketQua ; 
int dx[] = {1 , 0};
int dy[] = {0 , 1};

void Try(int x , int y){
	if(x == m && y == n ){
		if(tong > res){
			res = tong ;
			ketQua = duongDi ;
		}		
	}
	else{
		for (int i = 0 ; i < 2 ; i++){
			int xx = x + dx[i] ; 
			int yy = y + dy[i] ; 
			if(xx >= 1 && xx <= m && yy >= 1 && yy <= n){
				duongDi.push_back({xx , yy });
				tong += a[xx][yy] ; 
				Try(xx , yy ) ; 
				duongDi.pop_back();
				tong -= a[xx][yy] ;
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> m >> n ;
	for (int i = 1 ; i <= m ; i++){
		for (int j = 1 ; j <= n ; j++){
			cin >> a[i][j];
		}
	}
	tong = a[1][1];
	duongDi.push_back({1,1});
	Try(1,1);
	cout << res << endl ; 
	for (auto xx : ketQua){
		cout << xx.x << " " << xx.y << "\n" ; 
	}
	return 0 ; 
}

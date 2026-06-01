#include <iostream>
#include <vector>
using namespace std ; 
int n ; 
int a[100][100] ; 
vector<int> duongDi , ketQua ; 
int res = -1 ; 
int tong = 0 ; 
int dx[] = { 1 , 1 };
int dy[] = { 0 , 1 };
void Try(int x , int y){
	if(x == n ){
		if(res < tong){
			res = tong ; 
			ketQua = duongDi ; 
		}
	}
	else{
		for(int i = 0 ; i < 2 ; i ++ ){
			int xx = x + dx[i] ;
			int yy = y + dy[i] ;
			tong += a[xx][yy] ; 
			duongDi.push_back(a[xx][yy]);
			Try(xx,yy);
			tong -= a[xx][yy] ; 
			duongDi.pop_back() ;
		}
	}
}

int main(){
	cin >> n ;
	for (int i = 1 ; i <= n ; i++ ){
		for(int j = 1 ; j <= i ; j++ ){
			cin >> a[i][j] ; 
		}
	}
	tong = a[1][1] ;
	duongDi.push_back(a[1][1]);
	Try(1,1);
	
	for(int x : ketQua){
		cout << x << " " ; 
	}
	cout << endl << tong ; 
	
}

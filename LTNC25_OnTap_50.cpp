#include <bits/stdc++.h>
using namespace std ; 
int n , res(0); 
int a[100][100] ;
int dx[] = {1 , 0};
int dy[] = {0 , 1}; 
string tmp ;
void Try(int x , int y){
	if(x == n && y == n ){
		int np = stoi(tmp , nullptr , 2);
		if(np > res ) res = np ; 
	}
	else{
		for(int i = 0 ; i < 2 ; i++){
			int xx = x + dx[i] ;
			int yy = y + dy[i] ;
			if(xx >= 1 && xx <= n &&
			   yy >= 1 && yy <= n &&
			   a[xx][yy] != -1 ){
				tmp += to_string(a[xx][yy]) ; 
				int temp = a[xx][yy] ; 
				a[xx][yy] = -1 ; 
				
				Try(xx , yy ) ;
				
				a[xx][yy] = temp ; 
				tmp.erase(tmp.size() - 1 );
			}
		}
	}
}
int main(){
	cin >> n ; 
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			cin >> a[i][j] ; 
		}
	}
	tmp = to_string(a[1][1]) ; 
	Try(1,1);
	cout << res ; 
}

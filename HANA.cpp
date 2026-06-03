#include <bits/stdc++.h>
using namespace std;  
int n , m , ways(0);
int a[100][100] ; 
int dx[] = {1 , 0 };
int dy[] = {0 , 1 };
bool mushroom[] = { true , true , true , true} ;
void Try(int x , int y ){
	if(x == n && y == m ){
		int cnt = 0 ; 
		for(int i = 1 ; i < 4 ; i++){
			if(!mushroom[i]) cnt++;
		}
		if(cnt >= 2 ) ways++;
	}
	else{
		for(int i = 0 ; i < 2 ; i++){
			int xx = x + dx[i] ; 
			int yy = y + dy[i] ; 
			if(xx >= 1 && xx <= n && yy >= 1 && yy <= m 
			   && a[xx][yy] != -1 ){
					mushroom[a[xx][yy]] = false ;
				Try(xx ,yy ) ; 
					mushroom[a[xx][yy]] = true ; 
			}
		}
	}
	
}
int main(){
	cin >> n >> m ; 
	for (int i = 1 ; i <= n ; i++){
		for (int j = 1 ; j <= m ; j++){
			cin >> a[i][j] ; 
		}
	}
	Try(1,1);
	cout << (ways > 0 ? ways : -1) ; 
}

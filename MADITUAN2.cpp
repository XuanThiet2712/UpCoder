#include <bits/stdc++.h>
using namespace std;
int n , m , MIN(INT_MAX) ;
int a[1001][1001] = {0}; 
int xM , yM , xP , yP ; 
int dx[] = {2 , -2 , 1 , -1  , 2 , -2 , 1 , -1  ,};
int dy[] = {1 , 1  , 2 , 2  ,  -1 , -1  , -2 , -2 };
int cnt = 0 ; 
void Try(int x , int y ){
	if(cnt >= MIN) return;
	if(x == xP && y == yP){
		if(cnt < MIN) MIN = cnt ;
	}
	else{
		for(int i = 0 ; i < 8 ; i++){
			int xx = x + dx[i] ; 
			int yy = y + dy[i] ; 
			if(xx >= 1 && xx <= n && yy >= 1 && yy <= m && a[xx][yy] == 0 ){
				a[xx][yy] = 1 ; 
				cnt++;
				Try(xx,yy);
				cnt--;
				a[xx][yy] = 0 ; 
			}
		}
	}
}
int main(){
	cin >> n >> m ; 
	cin >> xM >> yM ;
	cin >> xP >> yP ; 
	a[xM][yM] = 1;
	Try(xM , yM ) ;
	cout << (MIN == INT_MAX ? -1 : MIN) ; 
}

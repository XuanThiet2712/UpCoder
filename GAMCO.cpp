#include <bits/stdc++.h>
using namespace std;  
int n , m , MIN = INT_MAX; 
char a[100][100] ;
int xB , yB , xC , yC ; 
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0  , -1, 0 , 1};
int cnt = 0 ; 

void Try(int x , int y){
	if(x == xB && y == yB){
		if(cnt < MIN) MIN = cnt ; 
	}
	else{
		for(int i=0;i<4;i++){
			int xx = x + dx[i] ; 
			int yy = y + dy[i] ;
			if(xx >= 1 && xx <= n && yy >= 1 && yy <= m && a[xx][yy] != '*') {
				char tmp = a[xx][yy] ; 
				a[xx][yy] = '*' ; 
				cnt++;
				Try(xx , yy ) ; 
				a[xx][yy] = tmp ; 
				cnt--;
			}
		}
	}
}
int main(){
	cin >> n >> m ; 
	for (int i = 1 ; i <= n ; i++){
		for (int j = 1 ; j <= m ; j++){
			cin >> a[i][j] ;
			if(a[i][j] == 'B') {
				xB = i ; yB = j ; 
			}
			if(a[i][j] == 'C'){
				xC = i ; yC = j ;
			}
		}
	}
	a[xC][yC] = '*';
	Try(xC , yC);
	cout << MIN ; 
}

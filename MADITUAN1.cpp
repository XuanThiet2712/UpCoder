#include <bits/stdc++.h>
using namespace std; 
int n , cnt(1) , ways(0) ; 
int a[20][20] = {0};
int dx[] = {1 , -1 , 1 , -1 , 2 , -2 , 2 , -2 };
int dy[] = {-2, -2 , 2 , 2  , -1 , -1 , 1 , 1 } ;
void Try(int x , int y){
	if(cnt == n*n){
		ways++;
	}
	else{
		for(int i = 0 ; i < 8 ; i++){
			int xx = x + dx[i] ; 
			int yy = y + dy[i] ;
			if( xx >= 1 && xx <= n && yy >= 1 && yy <= n 
			   && a[xx][yy] != 1 ){
				cnt++;
				a[xx][yy] = 1 ; 
				Try(xx,yy);
				a[xx][yy] = 0 ;
				cnt--;
			}
		}
	}
}
int main() {
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {			
			a[i][j] = 1;
			cnt = 1;		
			Try(i, j);			
			a[i][j] = 0;
		}
	}
	
	cout << ways;
}

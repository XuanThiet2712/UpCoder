#include <iostream>
using namespace std; 
int n , m , cnt(1);
int a[100][100] ; 
int xS , yS ; 
int dx[] = {-1 , 1 , 0 , 0 }; 
int dy[] = {0 , 0 , -1 , 1 };
void Try(int x , int y){
	for (int i = 0 ; i < 4 ; i++ ){
		int xx = x + dx[i] ; 
		int yy = y + dy[i] ; 
		if(xx >= 1 && xx <= n && yy >= 1 && yy <= m && a[xx][yy] == 0 ){
			cnt++;
			a[xx][yy] = 1 ; 
			Try(xx , yy ) ; 
		}		
	}
}

int main(){
	cin >> n >> m >> xS >> yS; 
	for (int i = 1 ; i <= n ; i++){
		for (int j = 1 ; j <= m ; j++){
			cin >> a[i][j]; 
		}
	}
	a[xS][yS] = 1 ;
	Try(xS , yS ) ; 
	cout << cnt ; 
}

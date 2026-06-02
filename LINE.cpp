#include <bits/stdc++.h>
using namespace std ; 
int n ,sy ,sx,  dy ,dx ; 
int a[10][10] ; 
bool found(0) ; 
int dX[] = {1 , -1 , 0 , 0  };
int dY[] = {0 , 0  , 1 , -1 };
void Try(int x ,int y){
	if(found) return;
	if(x == dy && y == dx){
			found = 1 ;
	}
	else{
		for(int i = 0  ; i < 4 ; i++){	
			int xx = dX[i] + x ;
			int yy = dY[i] + y ; 
			if(xx >= 1 && xx <= n && yy >= 1 && yy <= n && a[xx][yy] == 0 ){
				a[xx][yy] = 1 ; 
				Try(xx,yy);
				a[xx][yy] = 0 ; 
			}		
		}
	}
	
}

int main(){
	cin >> n >> sy >> sx >> dy >> dx ; 
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			cin >> a[i][j] ; 
		}
	}
	Try(sy,sx);
	cout << (found ? "YES" : "NO") ;
}

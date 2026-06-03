#include <bits/stdc++.h>
using namespace std ; 
struct ToaDo{
	int x , y ; 
};
ostream& operator << (ostream& out , ToaDo x){
	out << "["<<x.x<<","<<x.y<<"]" ; 
	return out ; 
}
int m , n ,tong(0);
int a[250][250] ;
vector<ToaDo>shared ;
int dx[] = {0 , -1 , 1 , 0 };
int dy[] = {1 , 0 , 0  , -1};

void Try(int x , int y ){
	for(int i = 0 ; i < 4; i++ ){
		int xx = x + dx[i] ; 
		int yy = y + dy[i] ;
		if(xx >= 1 && xx <= m && yy >= 1 && yy <= n 
		   && a[xx][yy] == 1 ){
			a[xx][yy] = 0 ;
			shared.push_back({xx,yy});
			Try(xx , yy );
		}
	}
}

int main(){
	cin >> m >> n ;
	for (int i = 1 ; i <= m ; i++){
		for (int j = 1 ; j <= n ; j++){
			cin >> a[i][j] ; 
			if(a[i][j] == 1 ) tong++;
		}
	}
	cout << tong << endl ; 
	for(int i = 1 ; i <= m ; i++){
		for (int j = 1 ; j <= n ; j++){
			if(a[i][j] == 1 ){
				shared.push_back({i,j});
				a[i][j] = 0 ;
				Try(i , j ) ; 
				cout << shared.size() << " " ; 
				for(int k = 0 ; k < shared.size() ; k++){
					if(k > 0) cout << ", ";
					cout << shared[k] ; 
				}
				cout << endl ; 
				shared.clear();
			}
		}
	}
}

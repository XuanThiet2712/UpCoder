#include <bits/stdc++.h>
using namespace std ; 
struct VECTOR{
	int x ,y ; 
};
ostream& operator << (ostream& out , VECTOR v){
	out << "("<<v.x<<","<<v.y<<")";
	return out ; 
}
int n , m  , cnt(0) , MIN(INT_MAX); 
int xA , yA , xB , yB ; 
vector<VECTOR> duongDi , res ; 
char a[100][100] ; 
int dx[] = {-1 , 0 , 1 , 0 }; 
int dy[] = {0 , -1 , 0 , 1};

void Try(int x , int y){
	if(x == xB && y == yB){
		if(cnt < MIN) 
			MIN = cnt ,
			res = duongDi ; 
	}
	else{
		for (int i = 0 ; i < 4 ; i++){
			int xx = x + dx[i] ; 
			int yy = y + dy[i] ; 
			if(xx >= 1 && xx <= n && yy >= 1 && yy <= m && a[xx][yy] != '*'){
				cnt++;
				VECTOR v = {xx , yy };
				duongDi.push_back(v) ; 
				char tmp = a[xx][yy] ;
				a[xx][yy] = '*' ; 
				Try(xx , yy ) ; 
				cnt--;
				duongDi.pop_back();
				a[xx][yy] = tmp ;
			}
		}
	}
}
int main(){
	cin >> n >> m ; 
	for (int i = 1 ; i <= n ; i++){
		for (int j = 1 ; j <= m ; j++){
			cin >> a[i][j] ;
			if(a[i][j] == 'A') xA = i , yA = j ; 
			if(a[i][j] == 'B') xB = i , yB = j ; 
		}
	}
	VECTOR v = {xA , yA};
	duongDi.push_back(v) ; 
	cnt++;
	Try(xA , yA) ; 
	cout << MIN << endl ; 
	for (VECTOR x : res){
		cout << x << " " ; 
	}
}

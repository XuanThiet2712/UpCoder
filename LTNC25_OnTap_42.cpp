#include <iostream>
#include <string>
using namespace std;
int main(){
	string s ;
	getline (cin , s ) ; 
	string tmp = "";
	bool inDigit = 0 ; 
	int sum = 0 ; 
	for(char c : s){
		if(isdigit(c)){
			tmp+=c;
			inDigit = 1 ; 
		}
		else if(inDigit){
			sum += stoi(tmp);
			tmp="";
			inDigit = 0 ; 
		}
	}
	if(inDigit) sum+=stoi(tmp);
	cout << sum ; 
}

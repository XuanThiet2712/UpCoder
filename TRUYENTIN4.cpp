#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();
	
	while(n--) {		
		string s;
		getline(cin, s);		
		string num = "";		
		for(char c : s) {			
			if(isdigit(c)) {
				num += c;
			}
			else {				
				if(!num.empty()) {
					cout << num << " ";
					num = "";
				}			
			}
		}	
		if(!num.empty()) {
			cout << num;
		}
		
		cout << endl;
	}
}

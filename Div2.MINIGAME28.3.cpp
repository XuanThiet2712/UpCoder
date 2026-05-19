#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack<int> st;
	stack<int> maxSt; // lưu max tại mỗi thời điểm
	
	int n, choice, x;
	cin >> n;
	
	while(n--){
		cin >> choice;
		
		if(choice == 1){
			cin >> x;
			st.push(x);
			// max mới = max giữa x và max hiện tại
			if(maxSt.empty())
				maxSt.push(x);
			else
				maxSt.push(max(x, maxSt.top()));
		}
		else if(choice == 2){
			st.pop();
			maxSt.pop(); // pop cùng lúc
		}
		else if(choice == 3){
			cout << maxSt.top() << endl; // O(1) ✅
		}
	}
}

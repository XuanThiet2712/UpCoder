#include <iostream>
using namespace std ; 
struct Node{
	int data ; 
	Node *next ; 
};
Node* MakeNode(int data){
	Node *newNode = new Node ; 
	newNode->data = data ; 
	newNode->next = NULL ;
	return newNode ; 
}

void addHead(Node *&head , int data){
	Node *newNode = MakeNode(data) ; 
	if (newNode == NULL ) return ;
	if(head == nullptr){
		head = newNode ;
		return ; 
	}
	else{
		newNode->next = head ; 
		head = newNode ; 
	}
}

void delHead(Node*& head, int k) {
	//xoa node dau 
	while (head != NULL && head->data == k) {
		Node* temp = head;		
		head = head->next;		
		delete temp;
	}
	
	Node* p = head;
	
	while (p != NULL && p->next != NULL) {
		
		if (p->next->data == k) {			
			Node* temp = p->next;			
			p->next = temp->next;		
			delete temp;
		}
		else {
			p = p->next;
		}
	}
}

int size(Node *head){
	Node *phead = head ; 
	int count = 0 ; 
	while(phead != nullptr){
		count ++ ; 
		phead = phead->next ; 
	}
	return count ; 
}
void xuat(Node *head ){
	Node* p = head;
	if (p == nullptr) return ; 
	xuat(p->next);
	cout << p->data<<" ";
}
int main(){
	Node *head = NULL ; 
	int data ,n , k; 
	cin >> n >> k ; 
	for (int i = 1 ; i <= n ; i++){
		cin >> data ;
		addHead(head , data);
	}
	delHead(head , k);
	cout <<size(head)<<endl;
	xuat(head);
}

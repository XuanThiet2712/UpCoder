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

void xuat(Node *head ){
	Node* p = head;
	if (p == nullptr) return ; 
	xuat(p->next);
	cout << p->data<<" ";
}
int main(){
	Node *head = NULL ; 
	int data ; 
	while(data != -1){
		cin >> data ;
		if (data == -1) break ; 
		addHead(head , data);
	}
	cout <<"DSLK ban dau: ";
	xuat(head);
}

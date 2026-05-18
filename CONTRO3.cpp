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

void addEnd(Node *& head , int data){
	Node *newNode = MakeNode(data) ;
	if (newNode == NULL ) return ;
	if(head == nullptr){
		head = newNode ;
		return ; 
	}
	Node* phead = head ; 
	while(phead->next != NULL){
		phead = phead->next ; 
	}
	phead->next = newNode ; 
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
void addX(Node *&head , int a , int k ){
	Node *newNode = MakeNode(a);
	if(k == 1 ){
		newNode->next = head ; 
		head = newNode ;
		return ;
	}
	Node *phead = head ; 
	for(int i=2;i<k;i++){
		phead = phead->next ; 
	}
	if(phead->next == NULL){
		phead->next = newNode ; 
		return ;
	}
	newNode->next = phead->next ; 
	phead->next = newNode ; 
}
void xuat(Node *head ){
	Node* p = head;
	if (p == nullptr) return ; 
//	xuat(p->next);
	while(p != NULL){
		cout << p->data<<" ";
		p = p->next ; 
	}

}
int main(){
	Node *head = NULL ; 
	int data , n , a , k ; 
	cin >> n >> a >> k ; 
	for (int i = 0 ; i < n ; i++){
		cin >> data ;
		addEnd(head , data);
	}
	addX(head , a , k ) ; 
	cout << size(head) << endl ; 
	xuat(head);
}

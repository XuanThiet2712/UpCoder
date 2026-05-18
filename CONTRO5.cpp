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

bool check(Node *head){
	Node *p1 = head ; 

	while(p1 != NULL){
		Node *p2 = p1->next ; 

		while(p2 != NULL){
			Node *p3 = head ;
			while(p3 != NULL){
				if(p1->data + p2->data == p3->data 
				   && p3 != p1 && p3 != p2 ) return true ; 
				p3 = p3->next ;
			}
			p2 = p2->next ;
			
		}
		p1 = p1->next ; 
	}
	
	return false ;
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
	int data , n ;
	cin >> n ;
	for (int i = 0 ; i < n ; i++){
		cin >> data ;
		addEnd(head , data);
	}
	cout << (check(head) ? "YES" : "NO");	

}

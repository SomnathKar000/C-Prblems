#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int val){
			data=val;
			next=NULL;
		}
};

void insertAtTail( node* &head, int val){
	node* n= new node(val);
	if(head==NULL){
		head=n;
		return;
	}
	node* temp = head;
	while(temp->next!=NULL){
		temp=temp->next;
		
	}
	temp->next=n;
}

void display(node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head= head->next;
	}
	cout<<endl;
}

void inserrtAtFirst(node* &head, int val){
	node* n = new node(val);
	n->next= head;
	head=n;
}

int main(){
	node* head =NULL;
	insertAtTail(head,10);
	insertAtTail(head,20);
	insertAtTail(head,30);
	insertAtTail(head,40);
	insertAtTail(head,50);
	inserrtAtFirst(head,0);
	display(head);
	
}

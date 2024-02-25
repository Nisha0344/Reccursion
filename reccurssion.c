#include<iostream>
using namespace std;
class node{

	public:
		int data;
		node* next;

	node(int data){
		this->data=data;
		this->next=NULL;
	}
};

void insertatHead(node* &head, int d){

	node* temp =new node(d);
	temp->next=head;
	head=temp;
}
void insertatTail(node* &tail, int d){
	node* temp=new node(d);
	tail->next=temp;
	tail=tail->next;
}

void print(node* head){
	node* temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
	cout<<count;
}

int main()
{
	node* node1= new node(10);
	cout<<node1->data<<endl;
	cout<<node1->next;

	node* head=node1;

	print(head);

   insertatHead(head, 22);
   insertatHead(head,40);
   insertatHead(head, 45);
   insertatHead(head,55);
   print(head);

  return 0;
}

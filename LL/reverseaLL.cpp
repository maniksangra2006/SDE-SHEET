#include<iostream>
using namespace std;
struct Node{
   int val;
   Node* next;
   Node(int x){
    val=x;
    next=NULL;
   }
};
void printLL(Node* head){
    while(head!=NULL){
      cout<<head->val<<" ";
      head=head->next;
    }
    cout<<endl;
}
Node* createLL(int  n){
    int value;
    cin>>value;
    Node* head=new Node(value); 
     Node* temp=head;
    for(int i=1;i<n;i++){
        cin>>value;
        temp->next=new Node(value);
        temp=temp->next;
    }
return head;
}
Node* reverse(Node* head){
Node* curr=head;
Node* temp=NULL;
Node* prev=NULL;
while(curr!=NULL){
    temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
}
return prev;

}
int main(){
int n;
cin>>n;
Node* head=createLL(n);
head=reverse(head);
printLL(head);
}
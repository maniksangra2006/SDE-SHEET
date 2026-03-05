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
Node* create(int n ){
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
 void print(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
  }
  Node* deleteNth(Node* head,int m){
    Node* dummy=new Node(0);
    dummy->next=head;
    Node* fast = dummy;
    Node* slow = dummy;
     for(int i=0;i<=m;i++){
        if(fast==NULL) return head;
        fast=fast->next;
     }
    while(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
     slow->next=slow->next->next;
     return dummy->next;
  }
int main(){
int n ;
cin>>n;
int m;
cin>>m;
Node* head=create(n);
Node* remove=deleteNth(head,m);
print(remove);
}
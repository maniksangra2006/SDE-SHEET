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
Node* createLL(int n){
    if(n==0) return NULL;
    int vle;
    cin>>vle;
    Node* head=new Node(vle);
    Node* temp=head;
    for(int i=1;i<n;i++){
        cin>>vle;
        temp->next=new Node(vle);
        temp=temp->next;
    }
return head;
}
void printLL(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
     cout<<endl;
}
Node* middle(Node* head){
    if(head==NULL) return NULL;
    Node* slow=head;
    Node* fast =head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
int main(){
int n ;
cin>>n;

Node* head =createLL(n);
Node* mid=middle(head);
printLL(mid);

}
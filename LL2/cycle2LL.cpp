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
  Node* detectcycle(Node* head){ 
    Node* fast = head;
    Node* slow = head; 
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    
    if(slow==fast){
        Node* entry=head;
          while(entry!=slow){
            entry=entry->next;
            slow=slow->next;
          }
        
          return entry;
        }
    }
    return NULL;
  }
int main(){
int n ;
cin>>n;
Node* head=create(n);
 Node* cycleNode = detectcycle(head);
 if(cycleNode != NULL)
        cout << "Cycle starts at node with value: " << cycleNode->val << endl;
    else
        cout << "No cycle detected" << endl;
}
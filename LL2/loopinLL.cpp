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
Node* createLL(int n ){
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
bool hasCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;        
        fast = fast->next->next;     
        if(slow == fast) {
            return true;             
        }
    }
    return false;  
}

int main(){
int n1;
cin>>n1 ; 
Node* head=createLL(n1);   
  if(hasCycle(head)) {
        cout << "Cycle detected!" << endl;
    } else {
        cout << "No cycle." << endl;
    }

}
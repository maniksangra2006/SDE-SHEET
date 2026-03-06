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
 void print(Node* head) {
    while(head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
Node * intersect(Node* l1,Node* l2){
    
    while(l1!=NULL){
     Node* temp=l2 ;//temp isiliye liya kyuki inner loop mei woh null ho jayega
        while(temp!=NULL){
            if(l1==temp) {
                return l1;
            }
            temp=temp->next;
        }
        l1=l1->next;
    }
    return NULL;
}
int main(){
int n1,n2;
cin>>n1>>n2;
Node* l1=createLL(n1);
Node *l2=createLL(n2);
Node* ans=intersect(l1,l2);
if(ans!=NULL)
    cout<<ans->val;
else
    cout<<"No intersection";
}
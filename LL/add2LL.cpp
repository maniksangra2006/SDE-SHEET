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
    cout<<endl;
}
Node* add2no(Node* l1,Node* l2){
Node* dummy=new Node(0);
Node* temp=dummy;
int carry=0;
while(l1!=NULL || l2!=NULL || carry){
      int sum=carry;
      if(l1!=NULL){
        sum+=l1->val;
        l1=l1->next;
      }
      if(l2!=NULL){
        sum+=l2->val;
        l2=l2->next;
      }
      carry=sum/10;
      temp->next=new Node(sum%10);
      temp=temp->next;
}
return dummy->next;
}
int main(){
int n1;
int n2;
cin>>n1 ;
cin>>n2;
Node* l1=createLL(n1);
Node* l2=createLL(n2);
Node* add=add2no(l1,l2);
print(add);
}
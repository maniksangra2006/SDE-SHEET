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
 void deletenode(Node* node){
    Node* temp=node->next;
    node->val=temp->val;
    node->next=temp->next;
    delete temp;
 }
 void print(Node* head) {
    while(head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main(){
int n ;
cin>>n;
Node* head=createLL(n);
Node* nodetodelete=head->next->next;
deletenode(nodetodelete);
print(head);
}
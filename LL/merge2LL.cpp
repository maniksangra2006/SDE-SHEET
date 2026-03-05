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
    int value;
    cin>>value;
    Node* head= new Node(value);
    Node* temp= head;
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
Node* mergeLL(Node* list1,Node* list2){
    Node* dummy=new Node(-1);
    Node* temp=dummy;

     while(list1 != NULL && list2 != NULL){
    if(list1->val<=list2->val){
         temp->next=list1;
         list1=list1->next;
    }
    else{
        temp->next=list2;
        list2=list2->next;
    }
     temp=temp->next;
    }
    
     if(list1 != NULL){
        temp->next = list1;
    }
    else{
        temp->next = list2;
    }

    return dummy->next;
}
int main(){
int n1,n2;
cin>>n1>>n2;
Node* list1=createLL(n1);
Node* list2=createLL(n2);
Node* merged=mergeLL(list1,list2);
print(merged);
}
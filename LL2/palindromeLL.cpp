#include<iostream>
#include<stack>
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
bool ispalindrome(Node* head) { 
       stack<int> st;
       Node* temp=head;
       while(temp!=NULL){
        st.push(temp->val);
        temp=temp->next;
       }
       temp=head;
       while(temp!=NULL){
        if(temp->val!=st.top()) return false;
        temp=temp->next;
        st.pop();
       }
    return temp==NULL;
}

int main(){
int n1;
cin>>n1 ; 
Node* head=createLL(n1);   
  if(ispalindrome(head)) {
        cout << "IT IS !" << endl;
    } else {
        cout << "IT'S NOT" << endl;
    }

}
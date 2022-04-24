#include <iostream>
using namespace std;
class Node{
    public:
      int data;
      Node* next;
};
 void insertAtBegining(int data,Node** head){
     Node* newnode = new Node();
     newnode->data=data;
     newnode->next=*head;
     *head=newnode;
     cout<<newnode -> data<<"inserted successfully :)"<<endl;
 }
 void insertAtEnd(int data, Node** head){
     Node* newnode = new Node();
     newnode->data=data;
     //last node always null
     newnode->next = NULL;
     if(*head=NULL){
         *head=newnode;
         cout<<newnode -> data<<"inserted successfully :)"<<endl;
         return ;
     }
     Node* temp=*head;
     while(temp->next != NULL){
         temp=temp->next;
     }
     temp->next=newnode;
     cout<<newnode -> data<<"inserted successfully :)"<<endl;
 }

//  int currSize(Node* node){
//      int size=0;
//      while(node !=NULL){
//          node=node->next;
//          size++;
//      }
//      return size;
//  }

void insertAfterNth(int data, Node** head,Node* temp){
    // int size= currSize(*head);
    // if(n<0 || n>size){
    //     cout<<"Invalid insertion..."<<endl;
    // }
    // if(n==0){
    //    insertAtBegining(data,head);
    // }
    int pos,i=1;
    cout<<"Enter the position to insert:";
    cin>>pos;
    while(i<pos){
       temp=temp->next;
       i++;
    }
    else{
        Node* newnode=new Node();
        newnode->data=data;
        newnode->next=NULL;
        Node* temp=*head;
        while(--n){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        cout<<newnode -> data<<"inserted successfully :)"<<endl;
    }
}
void display(Node* node){
    cout<<"=================================="<<"\n";
    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->next;
    }
     cout<<"=================================="<<"\n";
}
int main(){
    int ele;
    cout<<"enter the element to insert:";
    for(int i=0;i<size;i++){
      cin>>ele;
    }
    display(ele);
    return 0;
}
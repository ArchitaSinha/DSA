#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next=NULL;
    }
    //destructor
    ~Node(){
        int value=this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        } 
        cout<<"memory is free for node "<< value<<endl;
    }
};


void InsertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next= head;
    head = temp;
}

void InsertAttail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void InsertAtmiddle(Node* &head,Node* &tail,int d,int position){
    if(position==1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt=1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        InsertAttail(tail,d);
    }
    //Cretaing a node
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
    
}
void Deletion(Node* &head,Node* &tail,int position){
    if(position == 1){
        Node* temp=head;
        head=head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        if(curr->next == NULL){
            tail = prev;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
    
}
void Print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    Print(head);
    InsertAtHead(head,12);
    Print(head);
    InsertAttail(tail,15);
    Print(head);
    InsertAtmiddle(head,tail,11,2);
    Print(head);
    InsertAtmiddle(head,tail,1,1);
    Print(head);
    Deletion(head,tail,1);
    Print(head);
    Deletion(head,tail,3);
    Print(head);
    Deletion(head,tail,3);
    Print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;


}

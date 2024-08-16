class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node* tail = head;
        Node* temp = new Node(x);
        if (head == NULL) {
            return temp;
        }
        while(tail->next!=NULL){
            tail=tail->next;
           
        }
        tail->next = temp;
        return head;
    }
  
    
};

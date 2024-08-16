class Solution {
public:
    Node* constructLL(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return nullptr;  // Handle empty array case

        Node* node1 = new Node(arr[0]);  // Start with the first element
        Node* head = node1;
        Node* tail = node1;

        for (int i = 1; i < n; ++i) {
            InsertAttail(tail, arr[i]);
        }

        return head;
    }

    void InsertAttail(Node*& tail, int d) {
        Node* temp = new Node(d);
        tail->next = temp;
        tail = temp;
    }
};

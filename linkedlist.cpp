#include <iostream>
#include <algorithm>
using namespace std;

//Implement linked list node creation
class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2ll(vector<int> &ans){
    Node* head = new Node(ans[0]);
    Node* mover = head;
    for(int i = 1; i < ans.size(); i++){
        Node* temp = new Node(ans[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthofLL(Node* head){
    int cnt = 0;
    Node* temp = head;

    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int checkthevalue(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data== val) return 1;
        temp = temp->next;
    }
    return 0;
}
//DeletionHead from the ll;
Node* deletionHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;

    delete temp;
    return head;
}
//deleteTail from the Linkedlist
Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL) return NULL;

    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}
//deleteThe Kth element for the ll;
Node* deleteKthElement(Node* head, int k){
    if(head == NULL) return head;

    if(k == 1){
        Node* temp = head;
        head = temp->next;
        delete temp;
        return head;
    }
    int count = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp!=NULL){
        count++;
        if(count == k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

//Delete the value from the linkedlist

Node* deletevalue(Node* head, int val){
    if(head == NULL) return head;
    
    if(head->data == val){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        if(temp->data == val){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

// Insertion in Head in linkedlist
Node* InsertHead(Node* head, int val){
    Node* temp = new Node(val, head);
    return temp;
}



int main(){
     vector<int> ans = {2, 5, 8, 7};
     Node* head = convertArr2ll(ans);
    //  cout<<checkthevalue(head, 5)<<endl;
    //  cout<<checkthevalue(head, 6);
    
    
    //head = deletionHead(head);
    //Node* head1 = deleteTail(head);

    //Node* head2 = deleteKthElement(head, 3);

    //Node* head2 = deletevalue(head, 2);

    head = InsertHead(head, 100);

     //cout<<lengthofLL(head);
     //cout<<head->data;
    // //first method;
    // Node* head = new Node(ans[0]);

    // Node* second = new Node(ans[1]);
    // head->next = second;
    // Node* third = new Node(ans[2]);
    // second->next = third;
    // Node* fourth = new Node(ans[3]);
    // third->next = fourth;

    // Create and traverse linked list
    // Node* fourth = new Node(7, nullptr);
    // Node* third = new Node(8, fourth);
    // Node* second = new Node(5, third);
    // Node* head = new Node(2, second);

    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
     }
    cout<<endl;

    return 0;
}
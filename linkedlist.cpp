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

int main(){
    // vector<int> ans = {2, 5, 8, 7};
    // //first method;
    // Node* head = new Node(ans[0]);

    // Node* second = new Node(ans[1]);
    // head->next = second;
    // Node* third = new Node(ans[2]);
    // second->next = third;
    // Node* fourth = new Node(ans[3]);
    // third->next = fourth;

    // Create and traverse linked list
    Node* fourth = new Node(7, nullptr);
    Node* third = new Node(8, fourth);
    Node* second = new Node(5, third);
    Node* head = new Node(2, second);

    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    return 0;
}
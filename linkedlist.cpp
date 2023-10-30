    #include <iostream>
    using namespace std;


// class Node {
//     public:
//     int Value;
//     Node* Next;
// };
// void printList(Node*n){
//     while(n!=NULL){
//         cout << n->Value << endl;
//         n = n->Next;
//     }
// }
// int main (){
// Node* head = new Node();
// Node* second = new Node();
// Node* third = new Node();

// head->Value = 1;
// head->Next =second;
// second->Value = 2;
// second->Next = third;
// third->Value = 3;
// third->Next = NULL;

// printList(head);
//     system("pause>0");
//     }

// double Node
class Node {
    public:
    int value;
    Node* next;
    Node*previous;
};

void printForward(Node*head){
        Node* traverser=head;
        while (traverser != nullptr){
            cout<< traverser->value <<endl;
            traverser = traverser->next;
        }
}
        void printBackward(Node*tail){
        Node* traverser=tail;
        while (traverser != nullptr){
            cout<< traverser->value <<endl;
            traverser = traverser->previous;
        }
}

int main (){
    Node* head;
    Node* tail;
    //first Node 
    Node* node = new Node;
    node->value = 4;
    node->next = nullptr;
    node->previous = nullptr;
    head = node;
    tail = node;
    // 2nd node
    node = new Node();
    node->value = 5;
    node->next = nullptr;
    node->previous = tail;
    tail->next = node;
    tail = node;
    // add 3rd node
    node = new Node();
    node->value = 6;
    node->next = nullptr;
    node->previous = tail;
    tail->next = node;
    tail = node;

    //4th node
    node = new Node();
    node->value = 7;
    node->next = nullptr;
    node->previous = tail;
    tail->next = node;
    tail = node;

        printForward(head);
    //printBackward(tail);

    cin.get();
}
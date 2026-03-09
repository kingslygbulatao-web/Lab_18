#include <iostream>

using namespace std;

//struct cuz easier

struct Node {

    int data;
    
    Node * next;

};

Node * head;
void printList(Node * n){
    for(int i = 0; i < 10; i++){
        cout << "review " << i + 1 << ":" << " " << n->data << endl;
        n = n->next;
    }
}


void InsertAtTheFront(Node**head, int rating, string Comments){

    Node *newNode = new Node();

    newNode->data = rating;


    newNode->next = *head;

    *head = newNode;


}


void InsertAtTheBack(Node**head, int newData){

    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = NULL;

    if(*head == NULL){
        *head = newNode;
        return;
    }
    
    Node* last = *head;

    while (last->next != NULL){
        last = last->next;
    }

    last->next = newNode;
}

int main(){


    Node* head = new Node();

    int LinklistChoice;
    int rating;
    string Comments;
    char choice;

    cout << "Which linked list method method should we use?" << endl;

    cout << "  [1] " << "New nodes are added at the head of the linked list" << endl;
    cout << "  [2] " << "New nodes are added at the tail of the linked list" << endl;

    cin >>  LinklistChoice;

    if(LinklistChoice == 1){

        cout << "Enter review rating 0-5: ";
        cin >> rating;
        cout << "Enter review comments: ";
        cin >> Comments;
        cout << "Enter another review? y/n: "; 
        cin >> choice;
        
        if(choice == 'y'){
            while(choice == 'y'){
                cout << "Enter review rating 0-5: ";
                cin >> rating;
                cout << "Enter review comments: ";
                cin >> Comments;
                cout << "Enter another review? y/n: "; 
                cin >> choice;
            }
            
        } else {
        InsertAtTheFront(&head, rating, Comments);

        Node *current = head;
        printList(head);


        }   
    }else if (LinklistChoice == 2){

        InsertAtTheBack(&head, 4);
    }
    else {
        cout << "input a valid option" << endl;
    }
    }
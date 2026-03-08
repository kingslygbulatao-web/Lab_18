/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

//struct cuz easier

struct Node {

    int data;
    
    Node * next;

};

Node * head;



void InsertAtTheFront(Node**head, int newData){

    Node *newNode = new Node();
    newNode->data = newData;

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
            
        }


        InsertAtTheFront(&head, -1);
    }

    else if (LinklistChoice == 2){

        InsertAtTheBack(&head, 4);

    }
    else {
        cout << "input a valid option" << endl;
    }
    
    
}
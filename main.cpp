#include <iostream>

using namespace std;


struct Node {

    int data;
    
    Node * next;

};

Node * head;

void InsertAtTheFront(Node**head, int newData){

    Node *newNode = new Node();
    newNode->data = newData;


}

int main(){

    Node * head = nullptr;

    int LinklistChoice;
    int rating;
    string Comments;

    cout << "Which linked list method method should we use?" << endl;

    cout << "  [1] " << "New nodes are added at the head of the linked list" << endl;
    cout << "  [2] " << "New nodes are added at the tail of the linked list" << endl;

    cin >>  LinklistChoice;

    if(LinklistChoice == 1){

        InsertAtTheFront(&head, -1)

    } 
    if (LinklistChoice == 2){



    }
    else {
        cout << "input a valid choice." << endl;
    }


    cout << "LinklistChoice: " << LinklistChoice << endl;
    
    
}
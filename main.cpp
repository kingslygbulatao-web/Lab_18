//COMSC-210 | Lab 18 | Kingsly Bulatao
#include <iostream>
using namespace std;


struct Node {

    double rating;
    string comment;
    Node * next;

};

void printList(Node * n){
    double sum = 0;
    int count = 0;

    cout << "Outputting all reviews:" << endl;
    while(n != nullptr){
        count ++;
        cout << "    > Review #" << count << ": " << n->rating << ": " << n->comment << endl;
        sum += n->rating;
        n = n->next;
    }
    if (count > 0){
        double average = sum / count;
        cout << "Average: " << average << endl;
    }
}


void InsertAtTheFront(Node**head, int r, string c){
    Node *newNode = new Node();
    newNode->rating = r;
    newNode->comment = c;

    newNode->next = *head;
    *head = newNode;


}


void InsertAtTheBack(Node**head, int newRating, string newComment){
    Node* newNode = new Node();
    newNode->rating = newRating;
    newNode->comment = newComment;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
        return;
    }
    Node* last = *head;
    while (last->next != nullptr) {
        last = last->next;
    }
    last->next = newNode;
}

int main(){

    Node* head = nullptr;


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
            double rating;
            string comment;
            while(choice == 'y'){
                cout << "Enter review rating 0-5: ";
                cin >> rating;
                cin.ignore();
                cout << "Enter review comments: ";
                cin >> comment;
                getline(cin, comment);
                InsertAtTheFront(&head, rating, comment);
                cout << "Enter another review? y/n: "; 
                cin >> choice;
            }
            
        } else {
        InsertAtTheFront(&head, rating, Comments);
        printList(head);


        }   
    }else if (LinklistChoice == 2){

        InsertAtTheBack(&head, rating, Comments);
    }
    else {
        cout << "input a valid option" << endl;
    }
    }
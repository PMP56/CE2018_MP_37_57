#include "linkedlist.h"
#include <stddef.h>

LinkedList::LinkedList(){
    HEAD = NULL;
    TAIL = NULL;
}

LinkedList::~LinkedList(){}

LinkedList::addtoHead(int data){
    Node* newNode = new Node();
    newNode->info = data;
    newNode->next = HEAD;
    HEAD = newNode;
}

void LinkedList::traverse(){
    Node* temp = HEAD;

    while (temp!=NULL){
        std::cout << temp->info << " ";
        temp = temp->next;
    }
}


int main(){
    LinkedList A;
    A.addtoHead(10);
    A.addtoHead(20);
    A.addtoHead(40);
    A.traverse();

}

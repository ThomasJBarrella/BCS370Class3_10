#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;
  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};

int main() {
 Node * head = nullptr, *p = nullptr;; //an empty link list

 head = new Node(1);//head points to the first node here, once it does this, leave it alone

 p = head;

 p->next = new Node(2);
 p = p-> next;
 /*
 (*head).data - 1;
 (*head).next = nullptr;
 */
 head -> data = 1;
 head -> next = nullptr;

 /*head = new Node; //second Node
 head -> data = 2;
 head -> next = nullptr;*/
 //the above will just replace the data but won't make a new piece of data
 //below is the proper way to make new data in a new node

 /*head -> next = new Node;
 head -> next -> data = 2;
 head -> next -> next = nullptr;*/

 //have to put -> next for each new node(i.e: 3rd node is head->next->next = new Node;), it is very inefficient


 return 0; 
}
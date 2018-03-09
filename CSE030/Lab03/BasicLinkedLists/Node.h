#ifndef Node_h
#define Node_h

#include<iostream>

using namespace std;
// Define the Node struct below
struct Node
{
  int data;
  Node* next;
};


//Define the append function below
void append(Node* list, int data){
  Node* curr = list;
  
  Node* n = new Node();
  n->data = data;
  n->next = NULL;

  if (list->next == NULL){
    list->next = n;
  }else{
    while (curr->next != NULL){
      curr = curr->next;
    }
    curr->next = n;
  }
  
}


// Do not write any code below this line
#endif

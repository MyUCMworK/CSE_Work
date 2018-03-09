#ifndef RevNode_h
#define RevNode_h

#include<iostream>
using namespace std;

// Define the Node struct below
struct Node{
  int data;
  Node* prev;
  Node* next;
};


// Define the append function below 
Node* append(Node* A, int data){
  Node* new_Node = new Node();
  new_Node->data = data;
  new_Node->prev = NULL;
  new_Node->next = NULL;

  Node* curr = A;
   
  if (A->next == NULL){
    A->next = new_Node;
    new_Node->prev = A;
  }else{
    while (curr->next != NULL){
      curr = curr->next;
    }
    curr->next = new_Node;
    new_Node->prev = curr;
  }
  return new_Node;
}

// Do not write any code below this line
#endif

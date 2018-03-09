#ifndef Queue_h
#define Queue_h
#include <iostream>

// The Node data structure
struct Node {
    long data;
    Node* next;
    
    Node(long d) {
        data = d;
        next = NULL;
    }
    
    ~Node(){
        
    }
};


struct Queue {
    // Implement the Queue data structure so that the code works...
    void push(long value);
    long pop();
    bool isEmpty();


};

#endif

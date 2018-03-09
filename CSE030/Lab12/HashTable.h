#ifndef HashTable_h
#define HashTable_h


// This is just the node that we have used for linked lists/stacks/queues
struct Node {
    int data;
    Node* next;
    
    Node(){
        
    }
    
    Node(int data){
        this->data = data;
        next = NULL;
    }
};


struct HashTable {
    // Data will be stored in an array of queues
    // So a pointer to a pointer of Node
    Node** array;
    
    // The size is how many elements we wish to store
    int size;
    
    // Constructor, allocates enough memory for the table
    // and initializes it to NULL
    HashTable(int size){
        
        array = (Node**)malloc(sizeof(Node*) * size);
        
        for (int i = 0; i < size; i++){
            array[i] = NULL;
        }
        this->size = size;
    }
    
    // A hashing function
    int hash(int value){
        // Provide code here...
        // It should be "fast"
        return value % size;
    }
    
    // Insert function
    void insert(int value){
        // Provide code here
        // It should be O(1)
        Node* curr = new Node;
        int hashindex = hash(value);
        while (array[hashindex] != NULL && array[hashindex] -> next != NULL){
            curr = array[hashindex] -> next;
        }
        curr->data = value;
        curr->next = NULL;

    }
    
    // A search function
    bool search(int value){
        // Provide code here...
        // It should be amortized O(1)
        // Which means incredibly fast
        int hashindex = hash(value);
        while (array[hashindex] != NULL){
            if (array[hashindex] != NULL){
                return array[hashindex];
            }
            
            ++hashindex;
            hashindex %= size;
        }
        return NULL;
    }
    
    // A function to display the contents of the table
    void print(){
        for (int i = 0; i < size; i++){
            Node* curr = array[i];
            if (curr != NULL){
                while (curr != NULL){
                    std::cout << curr->data << " ";
                    curr = curr->next;
                }
                std::cout << std::endl;
            }
        }
    }
    
    // A function to delete a value from the table
    // It should delete the first occurrence of the value
    // Which means, you search for the value and delete it
    // If the value is not found in the table, you do nothing
    void remove(int value){
        // Provide code here...
        // It should be amortized O(1)
        // Again, amortized cost means that sometimes a removal
        // will be expensive but other times it will be cheap
        // With amortized analysis, we consider both cases
        // and amortized O(1) means that the number of times
        // the operation will be expensive, is limited to a
        // very small value, and most of the time it will be O(1)
    }
    
    // A destructor, which just releases the memory taken by the table
    ~HashTable(){
        free(array);
    }
    
};

#endif /* HashTable_h */

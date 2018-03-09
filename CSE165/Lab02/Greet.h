#ifndef Greet_h
#define Greet_h
// We should include <string> here
#include <iostream>
#include <string>
using namespace std;

// Implement your "greet" function below
void greet (string name, void(*p)(string)){
    return p(name);
}

#endif /* Greet_h */

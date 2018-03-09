#ifndef ENTRY_H
#define ENTRY_H
#include <iostream>
#include <string>
using namespace std;
struct Entry {
    string f_name;
    string l_name;
    string email;
    
    void setName(string name){
        f_name = name;
        
    }

    void setLastname(string lastname){
        l_name = lastname;
    }

    void setEmail(string email){
        this -> email = email;
    }

    void print(){
        cout << "First Name: " << f_name << endl;
        cout << "Last Name: " << l_name << endl;
        cout << "Email: " << email << endl;

    }

};
#endif
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string input;
    vector <string> word = vector <string>();
    
    while (cin >> input){
        if (input.length() > 1){
            word.push_back(input);
        }
        if (input.length() == 1){
            for (int i = 0; i < word.size(); i++){
                if(input.front() == word[i].front())
                    cout << word[i] <<endl;
            }
        }
        if (input == "quit"){
            break;
        }
    }
    return 0;
   
}



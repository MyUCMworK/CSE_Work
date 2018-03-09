#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int counts = 0;
    string word;
    
    ifstream myfile ("words.txt");
    cin >> word
    for (int i = 0; i < input.size(); i++){
        word[i] = tolower(word[i]);
    }
    while (myfile >> word){
        ++counts;
    }
    cout << counts;

    return 0;
}
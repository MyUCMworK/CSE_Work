#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int counts = 0;
    string word;
    ifstream myfile ("words.txt");
    while (myfile >> word){
        ++counts;
    }
    cout << counts;

    return 0;
}
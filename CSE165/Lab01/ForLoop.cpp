#include <iostream>
#include <string>
using namespace std;
int main (){
    string word;
    int x;
    getline(cin, word);
    cin >> x;
    for (int i = 1; i <= x; i++){
        cout << word << endl;
    }

return 0;
}

#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    if (num >= 2){
        cout << 2 << endl;
    }
    for (int i = 3; i < num; i = i + 2){
        int f = 0;
        for (int j = 1; j <= i; j++){
            if (i % j == 0){
                f++;
            }
        }
        if (f == 2){
            cout << i << endl;
        }
    }
   
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main(){
  string a;
  int c;
  while (c != -2){
    cin >> a >> c;
    if (c != -1){
      for (int i = 0; i < c; i++){
        cout << a;
      }
    }else {
      cout << "" << endl;
    }
  }
  return 0;
}

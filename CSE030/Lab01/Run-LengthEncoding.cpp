#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
  string a;
  int c;
  while (c != -2){
    cin >> a >> c;
    if (c != -1){
      vector<string> container(c, a);
      for (int i = 0; i < c; i++){
        cout << container[i];
      }
    }else {
      cout << "" << endl;
    }
  }
  return 0;
}

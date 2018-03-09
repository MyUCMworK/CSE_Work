#include <iostream>
using namespace std;
int main (){
  int x;
  while (cin >> x && x != -1){
  if (x%2 != 0){
    cout << "ODD";
  }
  else{
    cout << "EVEN";
  }  }return 0;
}

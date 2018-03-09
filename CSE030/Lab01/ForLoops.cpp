#include <iostream>
#include <string>
using namespace std;
int main(){
  string x;
  getline(cin, x);
  int n;
  cin >> n;
  for (int i=0; i<n; i++){
    cout << x;
  }
  return 0;
  
}

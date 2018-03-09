#include <iostream>
using namespace std;
int main (){
  int x;
  
  while(x!=-1){
    cin >> x;
    if(x%2!=0 && x!=-1){
    cout << "ODD";
    continue;
  } if(x%2==0){
    cout << "EVEN";
    continue;
    }if (x==-1){
      cout << "";
      break;
  }
  }
return 0;
}


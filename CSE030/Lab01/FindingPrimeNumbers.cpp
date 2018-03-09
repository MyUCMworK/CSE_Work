#include<iostream>
using namespace std;
int main(){
  int n, i, q;
  int p = 0;
  cin >> n;
  while(p<n){
    q = 0;
    for (i=2; i<=p; ++i){
      if (p % i==0){
	        q = 1;
	        break;
        }
    }
    if (q == 0){
	    cout << p << " ";
        ++p;
    }
}
    return 0;
}

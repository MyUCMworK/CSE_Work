#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
  ifstream inFile;
  string filename;
  string word;
  int count = -1;

  inFile.open("words.txt");

  while(!inFile.eof()){
    inFile >> word;
    count++;
  }cout << count;
  inFile.close();

  return 0;
}

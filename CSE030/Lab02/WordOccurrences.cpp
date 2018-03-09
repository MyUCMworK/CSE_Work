#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){
  ifstream inFile;
  string filename;
  string word;
  string simple;
  string a;
  int count = 0;
 
  cin >> simple;

  inFile.open("words.txt");
  while(inFile >> word){
  if (word.size() >= simple.size()){
    if (tolower(word[simple.size()-1]) == simple[simple.size()-1]){
      count++;
      }
      }
  }
  cout << count;
  inFile.close();

  return 0;
}

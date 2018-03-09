#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main() { 
	ifstream inFile;
	inFile.open("code.cpp");
	string line; 
	int num = 0;

// counting for number of lines
	 
       	while(!inFile.eof()) {
	  getline(inFile, line);
	  num++;
	}inFile.close();
	
// create array for storing
    string* arr = new string[num];
    int i=0;
     
// storing each line to array
    inFile.open("code.cpp");
	while(!inFile.eof()) {
	  
	  getline(inFile, line);
	  arr[i++] = line;
	  
	}
       
	for (int i = 0; i <= num-1 ; i++){
	  
	  cout << arr[i];
	 
	} inFile.close();
	return 0;
}

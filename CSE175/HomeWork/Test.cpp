#include <iostream>
using namespace std;
int main(){
    char grade;
    int score;
    cin >> score;
    if (score >= 900) {
        grade = 'A';
    }else if (score >= 800) {
        grade = 'B';
    }

    if (score >= 700) {
        grade = 'C';
    }else if (score >= 600) {
        grade = 'D';
    }else {
        grade = 'F';
    }
    cout << grade;
}
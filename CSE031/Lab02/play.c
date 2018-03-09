#include <stdio.h>

int main(){
    char eight_chars[8];
    int* a;
    for (int i = 0; i < 8; i++){
        eight_chars[i] = 'A' + i;
    }
    a = (int*) eight_chars;
    a[1] = 17;
    printf("%x\n", 66);
}
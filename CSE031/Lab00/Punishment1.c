#include <stdio.h>
int main(){
    int num;
    printf("Enter thenumber of lines for thepunishment:\n");
    scanf("%d", &num);
    if (num > 0){
        for (int i = 1; i <= num; i++){
            printf("C programming language is the best!");
        }
    }else{
        printf("You entered an incorrect value for the number of lines!\n");
    }
    
    return 0;
}
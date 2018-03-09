#include <stdio.h>
int main(){
    int num, typo;
    printf("Enter the number of lines for thepunishment:\n");
    scanf("%d", &num);
    printf("Enter the line for which we want to makea typo:\n");
    scanf("%d", &typo);
    if (num > 0){
        if (typo > 0 && typo <= num){
            for (int i = 1; i <= num; i++){
                if (i == typo){
                    printf("C programming language is the bet!");
                }else {
                    printf("C programming language is the best!");
                }
            } if (num == typo){
                printf("C programming language is the bet!");
            }
        } else {
            printf("You entered an incorrect value for the number of lines!\n");
        }

    }else {
        printf("You entered an incorrect value for the number of lines!\n");
    }
    
    return 0;
}
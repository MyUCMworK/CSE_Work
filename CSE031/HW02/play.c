#include <stdio.h>
#include <string.h>
char*upcase(char*str){ 
    char*p;
    char*result;
    result=(char*)malloc(strlen(str)+1); 
    strcpy(result,str);
    for(p = result; *p != '\0'; p++){
        /*Fill-in‘A’=65,‘a’=97,‘Z’=90 , ‘z’ = 122*/
        if(*p >= 'a' && *p <= 'z'){
        *p += 'A' - 'a'; //-32
        }
        return result;
    }
}

void upcase_by_ref(char**n){
    /*Fill-in*/
    *n=upcase(*n);
}
void upcase_name(char*names[],int i){
    /*Nonottouch*/ 
    upcase_by_ref(&(names[i]));
}

int main(){
    char name[3];
    name[0] = "abc";
    name[1] = "bcd";
    name[2] = "cde";
    upcase_name(name, 3);
    //printf("/n", name);
}
/* a */
char* upcase(char* str){
    char* p;
    char* result;
    result = (char*)malloc((strlen(str) + 1)* sizeof(char));
    strcpy(result, str);
    for (p = result; *p != '\0'; p++){
    /* Fill-in ‘A’ = 65, ‘a’ = 97, ‘Z’ = 90 , ‘z’ = 122 */
        if(*p >= 'a' && *p <= 'z'){
            *p += 'A' - 'a';
        }
    }
    return result;
}

/* b */
void upcase_by_ref( char** n ) {  /* Fill-in */
    *n = upcase(*n);
}
void upcase_name(char* names[], int i) { /* No not touch */
    upcase_by_ref( &(names[i]) );
}

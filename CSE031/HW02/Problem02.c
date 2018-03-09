char** copyStrArray (int count, char **strArray){
    char** copy;
    char** temp;

    copy = (char**) malloc (count* sizeof(char*));
    temp = copy;
    for (int i = 0; i < count; i++){
        (*temp) = (char*)malloc((strlen(*strArray) + 1)* sizeof(char));
        strcpy(*temp, *strArray);
        temp++;
        strArray++;
    }
    return copy;
}
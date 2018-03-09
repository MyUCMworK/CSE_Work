#ifndef InsertLookup_h
#define InsertLookup_h

/*bool find(long* list, long size, long value){
   for (long i = 0; i < size; i++) {
       if (list[i] == value){
           return true;
       }
   }

   return false;
}*/

/*void insertion_sort(long list[], long size){
   long n = size;
   for (long i = 1; i < n; i++) {
       long j = i;
       while (j > 0 && list[j-1] > list[j]){
           long temp = list[j];
           list[j] = list[j-1];
           list[j-1] = temp;
           j = j - 1;
       }
   }
}*/

void insertValue(long list[], long size){
    for (int i = 0; i < size; i++){
        list[i] = i;
    }
}


void insert(long* list, long size, long value){
   list[size - 1] = value;
   //insertion_sort(list, size);
   insertValue(list, size);
}

bool find(long list[], long size, long value){
    long l = 0;
    long u = size;
     while (u > l){
         long mid = l + (u - l)/2;
         if (list[mid] == value){
                return true;
            }else if (list[mid] < value){
                l = mid + 1;
            }else{
                u = mid;
    }

}
    return -1;
}

#endif

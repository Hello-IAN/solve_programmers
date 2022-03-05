#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) 
{ 
    return strcmp((char*)b, (char*)a);
}

char* solution(const char* s) {
 
    int len = strlen(s);
    char* answer = (char*)malloc(len + 1);
    
    answer = strcpy(answer, s);
    qsort(answer, len, sizeof(answer[0]), compare);
    
    return answer;
}
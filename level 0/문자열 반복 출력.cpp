#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int n) 
{
    int len = strlen(my_string);
    char* answer = (char*)malloc(len*n);
    int k=0;
    
    for (int i=0; i<len; i++)
    {    for (int j=0; j<n; j++)
        {
            answer[k] = my_string[i];
            k++;
        }
    }
    answer[k] = NULL;
    return answer;
}

#include <stdio.h>

int compare(const void* a, const void* b)  
{
    int num1 = *(int*)a;   
    int num2 = *(int*)b;   

    if (num1 < num2)    
        return -1;      

    if (num1 > num2)    
        return 1;      

    return 0;   
}

int main() {
    int* arr = NULL;
    int len, i;

    scanf("%d", &len);
    arr = (int*)malloc(len * sizeof(int));

    for (i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, len, sizeof(int), compare);
    for (i = 0; i < len; i++) {
        printf("%d \n", arr[i]);
    }
    free(arr);
    return 0;
}
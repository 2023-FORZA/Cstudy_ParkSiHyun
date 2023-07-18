#include<stdio.h>
#include<stdlib.h>

int sum_arr(int size);

int main(){
    int n= 0;
    scanf("%d",&n);
    printf("%d",sum_arr(n));
    return 0;
}

int sum_arr(int size){
    char *arr = malloc(sizeof(char)*size);
    memset(arr, 0x00, sizeof(char)*size);
    int i = -1;
    int sum;
    scanf("%s",arr);
    for( i= 0; i< size ; i++)
    {
        sum+= arr[i] -'0';
    }
    free(arr);
    return sum;
}
#include <stdio.h>
int main(){
    
    int n,t,max=2,min=100000;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &t);
        if (t>max)
            max=t;
        if (t<min)
            min=t;
        }
    printf("%d\n", max*min);
    
    return 0;
}
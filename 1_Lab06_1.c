#include <stdio.h>
int main(){
    int arr[3]={1,2,3};
    int n,a,a1,b,b1,try;
    scanf("%d",&n);
    for(int i=0;i<n;i++){ 
        scanf("%d %d",&a,&b);
        if(a==b)   
            continue;
        else{
            for(int k=0;k<3;k++){ 
                if(arr[k] == a)
                    a1 = k;
                else if(arr[k] == b) 
                    b1 = k;
                else{}
            }
            
            try = arr[a1];
            arr[a1] = arr[b1];
               arr[b1] = try;   
        }
    }
    printf("%d",arr[0]);
    return 0;
}
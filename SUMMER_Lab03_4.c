#include <stdio.h>
void JBox(int n){	
    
    for (int i = 0; i < n; i++) printf("#");
    printf("\n");
    
    for (int i = 0; i < n-2; i++){
        printf("#");
        for (int j = 0; j < n-2; j++) printf("J");
        printf("#\n");
    }
    
    for (int i = 0; i < n; i++) printf("#");
    printf("\n\n");
    
    return 0;
}
int main(){
    int n, *box;
    scanf("%d", &n);
    box = malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++) scanf("%d", &box[i]);
    for (int i = 0; i < n; i++){
        if (box[i] == 1) printf("#\n\n");	
        else JBox(box[i]);
    }
    return 0;
}
/* Asjad */
#include <stdio.h>
int main(){
    int i,j,n;
    printf("Enter size of pattern : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            if(j>1){
                printf(",");
            }
            printf("%c", j + 64);
        }
        printf("\n");
    }
    return 0;
}




/* Asjad */
#include <stdio.h>
int main(){
    int i,j,k,n;

    printf("Enter size of pattern : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i+1;j++){
            if(j==1){
                printf("[");
            }else if(j==i+1){
                printf(">");
            }else{
                printf("=");
            }
        }
        for(k=i;k<=n;k++){
            if(k==n){
                printf("]");
            }else{
                printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}



/* Asjad */
#include <stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter size of pattern : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=n-i+1;k<=n+1;k++){
            if(k==n-i+1){
                printf("/");
            }else if(k==n+1){
                printf("\\");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=i-1;j++){
            printf(" ");
        }
        for(k=i;k<=n+1;k++){
            if(k==i){
                printf("\\");
            }else if(k==n+1){
                printf("/");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}



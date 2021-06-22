/* Asjad */
#include <stdio.h>
int main(){
    int i,j,k,l,n;
    printf("Enter size of pattern : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=n-i+1;k<=n;k++){
            printf("*");
        }
        for(l=1;l<=i;l++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n-1;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(k=i+1;k<=n;k++){
            printf("*");
        }
        for(l=1;l<=n-i;l++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

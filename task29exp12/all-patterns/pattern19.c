/* Asjad */
#include <stdio.h>
int main(){
    int i,j,k,l,n;

    printf("Enter size of pattern : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c", i + 64);
        }
        for(k=i+1;k<=n;k++){
            printf(" ");
        }
        printf("\t");
        for(l=1;l<=i;l++){
            printf("%c", i + 96);
        }
        printf("\n");
    }
    return 0;
}


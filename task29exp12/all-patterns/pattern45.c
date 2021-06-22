/* Asjad */
#include <stdio.h>
int main(){
    int i,j,k,l,n;
    printf("Enter size of pattern : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i-1;j++){
            printf(" ");
        }
        for(k=1;k<=n-i+1;k++){
            printf("%d", k);
        }
        printf("|");
        for(l=n-i+1;l>=1;l--){
            printf("%d", l);
        }
        printf("\n");
    }
    return 0;
}




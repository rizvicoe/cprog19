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
        for(k=n-i+1;k<=n-1;k++){
            printf("<");
        }
        if(i==1){
            printf(" ^ ");
        }else{
            printf("   ");
        }
        for(l=1;l<=i-1;l++){
            printf(">");
        }
        printf("\n");
    }

    return 0;
}

/* Asjad */
#include <stdio.h>
int main(){
    int i,j,k,l,m,n,printval;
    printval = 1;
    printf("Enter size of pattern : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c", printval + 64);
            printval++;
        }
        for(k=i+1;k<=n;k++){
            printf(" ");
        }
        for(l=1;l<=i-1;l++){
            printf(" ");
        }
        for(m=1;m<=n-i+1;m++){
            printf("%c", m + 79);
        }
        printf("\n");
    }
    return 0;
}



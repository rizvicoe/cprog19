/* Asjad */
#include <stdio.h>
int main(){
    int i,j,n,printval;
    printval = 0;
    printf("Enter size of pattern : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d", printval);
            printval++;
        }
        printf("\n");
    }
    return 0;
}


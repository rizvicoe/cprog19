/* Asjad */
#include <stdio.h>
int main(){
    int i,j,n,printval;
    printval = 2;
    printf("Enter size of pattern : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d", printval);
            printval = printval * 2;
        }
        printf("\n");
    }
    return 0;
}



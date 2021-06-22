/* Asjad */
#include <stdio.h>
int main(){
    int i,j,printval,n;
    printval = 1;
    printf("Enter size of pattern : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=1;j<=printval;j++){
            printf("%d", printval);
        }
        printval = 3 * i;
        printf("\n");
    }

    return 0;
}

/* Asjad */
#include <stdio.h>
int main(){
    int i,j,printval,n;
    printval = 1;
    printf("Enter size of pattern : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j>1){
                printf("&");
            }
            printf("%c", printval + 79);
            printval++;
        }
        printval--;
        printf("\n");
    }
    return 0;
}


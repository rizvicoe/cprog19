/* Asjad */
#include <stdio.h>
int main(){
    int i,j,sum,n;
    printf("Enter size of pattern : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        sum = 0;
        for(j=1;j<=i;j++){
            sum = sum + j;
            printf("%d", j);
            if(j<i){
                printf("+");
            }
        }
        printf("=%d", sum);
        printf("\n");
    }
    return 0;
}



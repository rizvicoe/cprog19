/* Asjad */
#include <stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter size of pattern : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d", j);
        }
        for(k=1;k<=i-1;k++){
            printf("%c", k+64);
        }
        printf("\n");
    }
    return 0;
}




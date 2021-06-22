/* Asjad */
#include <stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter size of pattern : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c", j + 64);
        }
        for(k=1;k<=n-i+1;k++){
            printf("%c", 91 - k);
        }
        printf("\n");
    }

    return 0;
}

/* Asjad */
#include <stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter size of pattern : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=i;j>=1;j--){
            printf("%d", j);
        }
        for(k=2;k<=i;k++){
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}


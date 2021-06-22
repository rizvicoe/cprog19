/* Asjad */
#include <stdio.h>
int main(){
    int i,j,k,n,pascal;
    printf("Enter size of pattern : ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        pascal = 1;
        for(j=0;j<n-i;j++){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            printf("%d ", pascal);
            pascal = pascal * (i - k) / (k + 1);
        }
        printf("\n");
    }
    return 0;
}

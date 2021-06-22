/* Asjad */
#include <stdio.h>
int main(){
    int i,j,n;
    printf("Enter size of pattern : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j>1){
                printf("->");
            }
                printf("()");
        }
        printf("\n");
    }
    return 0;
}

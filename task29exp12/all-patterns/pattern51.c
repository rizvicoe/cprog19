/* Asjad */
#include <stdio.h>
int main(){
    int i,j,n;
    printf("Enter size of pattern : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("(");
        for(j=1;j<=i;j++){
            if(i%3==0){
                printf("*");
            }else if(i%3==2){
                printf("+");
            }else{
                printf("-");
            }
        }
        printf(")");
        printf("\n");
    }
    return 0;
}


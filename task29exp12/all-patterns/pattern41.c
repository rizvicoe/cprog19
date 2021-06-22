/* Asjad */
#include <stdio.h>
int main(){
    int i,j,n;

    printf("Enter size of pattern : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i+1;j++){
            if(j==1 || j==i+1){
                printf("+");
            }else{
                printf("-");
            }
        }
        printf("\n");
    }
    return 0;
}





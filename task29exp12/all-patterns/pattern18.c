/* Asjad */
#include <stdio.h>
int main(){
    int i,j,n;
    printf("Enter Vertical size of pattern : ");
    scanf("%d", &n);


    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if( (i==1) || (i==n) || (j==1) || (j==n) ){
                printf("*");
            }else if(i == j){
                printf("$");
            }else{
                printf(" ");
            }
        }printf("\n");
    }

    return 0;
}

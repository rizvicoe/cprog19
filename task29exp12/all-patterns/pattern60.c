/* Asjad */
#include <stdio.h>
int main(){
    int i,j,n;
    printf("Enter size of pattern : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("[");
        for(j=1;j<=i;j++){
            if(i%5==1){
                printf("@");
            }else if(i%5==2){
                printf("?");
            }else if(i%5==3){
                printf(">");
            }else if(i%5==4){
                printf("=");
            }else{
                printf("<");
            }
        }
        printf("]");
        printf("\n");
    }
    return 0;
}



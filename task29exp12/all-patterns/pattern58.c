/* Asjad */
#include <stdio.h>
int main(){
    int i,j,n;
    printf("Enter size of pattern : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j%4==1){
                printf("!");
            }else if(j%4==2){
                printf("*");
            }else if(j%4==3){
                printf("#");
            }else{
                printf("$");
            }
        }
        printf("\n");
    }
    return 0;
}


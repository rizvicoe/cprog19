/* Asjad */
#include <stdio.h>
int main(){
    int i,j,k,n;

    printf("Enter size of pattern : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i+2;j++){
            if(j==1){
                printf("[");
            }else if(j==i+2){
                printf("]");
            }else{
                printf("#");
            }
        }
        for(k=i;k<=n;k++){
            printf(" ");
        }
        printf("\t");
        printf("%d%%", i*10);
        printf("\n");
    }
    return 0;
}



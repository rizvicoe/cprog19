/* Asjad */
#include <stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter size of pattern : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=(2*i)+1;k++){
            if(k%2==0){
                printf("1");
            }else{
                printf("|");
            }
        }
        printf("\n");
    }

    return 0;
}

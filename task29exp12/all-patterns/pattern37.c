/* Asjad */
#include <stdio.h>
int main(){
    int i,j,n;
    printf("Enter size of pattern : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i%2==0){
                printf("%c", j+96);
            }else{
                printf("%c", j+64);
            }
        }
        printf("\n");
    }
    return 0;
}


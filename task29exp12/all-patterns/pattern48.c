/* Asjad */
#include <stdio.h>
int main(){
    int i,j,k,l,n;
    printf("Enter size of pattern : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=i;k<=(2*i)-1;k++){
            printf("%d", k);
        }
        for(l=(2*i)-2;l>=i;l--){
            printf("%d", l);
        }
        printf("\n");
    }

    return 0;
}

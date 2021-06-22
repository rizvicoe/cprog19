/* Asjad */
#include <stdio.h>
int main(){
    int i,j,n;
    printf("Enter size of pattern : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=i;j<=(2*i)-1;j++){
            printf("%c%c", j + 64, j + 96);
        }
        printf("\n");
    }

    return 0;
}



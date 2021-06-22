/* Asjad */
#include <stdio.h>
int main(){
    int i,j,vertical,horizontal;
    printf("Enter Vertical size of pattern : ");
    scanf("%d", &vertical);
    printf("Enter Horizontal size of pattern : ");
    scanf("%d", &horizontal);

    for(i=1;i<=vertical;i++){
        for(j=1;j<=horizontal;j++){
            if( (i==1) || (i==vertical) || (j==1) || (j==horizontal) ){
                printf("*");
            }else{
                printf("$");
            }
        }printf("\n");
    }

    return 0;
}


#include<stdio.h>
const float PI=3.142;

int main(){
    int s1,s2,d;
    float area;
    scanf("%d %d",&s1,&s2);

    if(s1>s2){
        d = s2;
    }else{
        d = s1;
    }

    area = PI*d/2;

    printf("%.2f",area);

    return 0;
}

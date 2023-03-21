#include <stdio.h>

int main(){
    int num,po,o;
    scanf("%d%d",&num,&po);
    o=1;
    for(int i=1;i<=po;i++){
        o=o*num;
    }
    printf("%d",o);
    return 0;
}
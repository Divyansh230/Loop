#include <stdio.h>

int main(){

    int c;
    scanf("%d",&c);
    for(int i=0;i<=c;i++){
        if(c%i==0)
        printf("%d,",i);

    }
    return 0;
}
#include <stdio.h>

int main(){
    int x;
    printf("Enter your number: ");
    scanf("%d",&x);
    for(int i=0;i<=10;i++){
        printf("%d * %d = %d\n",x,i,x*i);
    }
    return 0;
}
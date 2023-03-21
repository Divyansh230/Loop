#include <stdio.h>

int main(){
    int num,sum,pr;
    scanf("%d",&num);
    
    sum=0;
    pr=1;
    while(num!=0){
        sum+=num%10;
        pr*=num%10;
        num/=10;
    }
    printf("Sum=%d",sum);
    printf("Product=%d",pr);
    return 0;
}
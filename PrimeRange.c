#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int i=2;
    while(num>=1){
        if(num%i==0)
        printf("%d,",i);
        else
        i++;
        num/=i;
    }
    return 0;
}
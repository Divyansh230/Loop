#include <stdio.h>

int main(){
    int n,c;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n!=0){
        c++;
        n/=10;
    }
    printf("Number of digits in %d=%d",n,c);
    return 0;
}
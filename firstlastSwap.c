#include <stdio.h>

int main(){
    int num,x,y;
    printf("Enter a number: ");
    scanf("%d",&num);

    x=num%10;
    num=rev(num);
    y=num%10;
    num/=10;
    num=rev(num);
    num/=10;
    printf("%d%d%d",x,num,y);

    return 0;
}

int rev(int x)
{
    int t,a;
    t=x;
    a=0;
    while(t!=0){
        a=a*10+t%10;
        t/=10;
    }
    return a;
}
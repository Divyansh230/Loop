#include<stdio.h>
int main(){
    int n,l,t,u,temp;
    int sum=0;
    printf("enter any integer");
    scanf("%d",&n);
    l=n%10;
    while(n!=0){
        sum=sum*10+n%10;
        n=n/10;
    }
    printf("revrse number%d\n",sum);
    u=sum%10;
    u=temp;
    l=u;
    temp=l;
    printf("last digit is %d\n",l);
    printf("first digit is %d\n",u);
    return 0;
}
#include <stdio.h>

int main(){
    int num,s1,s2;
    printf("Enter Limit: ");
    scanf("%d",&num);

    s1=0;
    s2=0;
    for(int i=0;i<=num;i++)
    {
         if(i%2==0){
            s1+=i;
         }
         else{
            s2+=i;
         }
    }
    printf("Sum of all odd numbers=%d\nSum of all even number is=%d",s2,s1);
    return 0;

}
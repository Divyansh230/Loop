#include <stdio.h>

int main(){
    int n,t,rev;
    printf("Enter a number: ");
    scanf("%d",&n);

    t=n;
    while(n!=0){
        rev=rev*10+n%10;
        n=n/10;
    }
    if(rev==t)
    printf("Palindrome Number");
    else
    printf("Palindrome Nhi Hai");
    return 0;
    

}
#include <stdio.h>

int main(){
    char ch,i;
    scanf("%d",&ch);
    i='a';
    while(i<='z'){
        printf("%c,",i);
        i++;
    }
    return 0;
}
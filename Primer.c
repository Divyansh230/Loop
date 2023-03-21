#include <stdio.h>

int main(){
    int x;
    printf("Enter Prime limit: ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        int j;
        for( j=2;j<i;j++){
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("%d,",i);

    }
    return 0;
}
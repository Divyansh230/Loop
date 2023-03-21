#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<9;i++){
        int t=n;int f=0;
        while(t!=0){
            if(t%10==i)
            f++;
            t/=10;
        }
        if(f)
        printf("Freq of %d is %d\n",i,f);
    }
    return 0;
}
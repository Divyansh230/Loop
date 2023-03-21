#include <stdio.h>

int main(){
    int num,t;
    printf("Enter a Number: ");
    scanf("%d",&num);
    

    while(num!=0){
        num=num*10+num%10;
        num/=10;
    }
    while(t!=0){
        int c=t%10;
        switch (c)
        {
        case 0:/* constant-expression */
        printf("Zero");/* code */
            break;
        case 1:
        printf("One");
        break;
        case 2:
        printf("Two");
        break;
        case 3:
        printf("Three");
        break;
        case 4:
        printf("Four");
        break;
        case 5:
        printf("Five");
        break;
        case 6:
        printf("Six");
        break;
        case 7:
        printf("Seven");
        break;
        case 8:
        printf("Eight");
        break;
        case 9:
        printf("Nine");
        default:
        printf("Erroe");



        
        
        }
        t/=10;
    }
    return 0;
}
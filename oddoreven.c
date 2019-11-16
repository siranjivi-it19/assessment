#include <stdio.h>
int num(int a) {
    for(int i=0;i<=a;i++)
    {
        if(i%2==0)
        printf("%d is even\n",i);
        else
        printf("%d is odd\n",i);
    }
}
int main() {
    int x;
    printf("enter the limit : \n");
    scanf("%d",&x);
    num(x);
    return 0;
}

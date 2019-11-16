#include <stdio.h>
int fun(a) {
    if((a%3==0)&&(a%5==0))
    printf("fizz_buzz\n");
    else if(a%3==0)
    printf("fizz\n");
    else if(a%5==0)
    printf("buzz\n");
    else
    printf("the number is %d ",a);
}
int main() {
    int n;
    printf("enter the number : \n");
    scanf("%d",&n);
    fun(n);
    return 0;
}

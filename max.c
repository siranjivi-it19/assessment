#include <stdio.h>
int max(int a,int b) {
    if(a>b)
    printf("%d is greater\n",a);
    else
    printf("%d is greater\n",b);
}
int main() {
    int x,y;
    printf("enter two numbers : \n");
    scanf("%d %d",&x,&y);
    max(x,y);
    return 0;
}

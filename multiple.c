#include <stdio.h>
int fun(a) {
    int num=0;
    for(int i=0;i<=a;i++)
    {
        if((i%3==0)||(i%5==0))
        {
            num=num+i;
        }
    }
    printf("%d \n",num);
}
int main() {
    int x;
    printf("enter the limit :\n");
    scanf("%d",&x);
    fun(x);
    return 0;
}

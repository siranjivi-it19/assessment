#include <stdio.h>
int fun(x) {
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("enter a number :\n");
    scanf("%d",&n);
    fun(n);
    return 0;
}

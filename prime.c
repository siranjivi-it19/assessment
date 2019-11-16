#include <stdio.h>
int prime(int n) {
    int count;
    for(int i=1;i<=n;i++)
    {
        count=0;
        for(int j=1;j<=n;j++)
        {
            if(i%j==0)
            {
               count++;
            }
        }
        if(count==2)
        {
            printf("%d \n",i);

        }
    }
}
int main() {
    int num;
    printf("enter the num :\n");
    scanf("%d",&num);
    prime(num);
    return 0;
}

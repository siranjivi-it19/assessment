

#include <stdio.h>
int speed(a) {
    int x,y;
    if(a<=70)
    {
       printf("OK\n");
    } 
    else
    {
       x=a-70;
       y=x/5;
       if(y<=12)
       {
           printf("%d",y);
       }
       else
       {
           printf("your licence suspended\n");
       }
    }
}
int main() {
    int num;
    printf("enter speed :\n");
    scanf("%d",&num);
    speed(num);
    return 0;
}

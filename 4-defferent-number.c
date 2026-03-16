#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    printf("enter 4 defferent number\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b&&a>c&&a>d)
    {
        printf("Greater=%d",a);
    }
    else if(b>c&&b>d)
    {
        printf("greater=%d",b);
    }
    else if(c>d)
    {
        printf("Greater=%d",c);
    }
    else
    {
        printf("Greater=%d",d);
    }
    getch();
}
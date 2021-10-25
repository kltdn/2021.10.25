#include<stdio.h>

int main()
{
    float x,y;
    char a;
    scanf("%f %c %f",&x,&a,&y);
    if(a!='+' && a!='-' && a!='*' && a!='/')
    {
        printf("Invalid operator!");
    }
    else
    {
        if(a=='+') printf("%f",x+y);
        if(a=='-') printf("%f",x-y);
        if(a=='*') printf("%f",x*y);
        if(a=='/' && y==0)  
        {
            printf("Divided by zero!");
        } 
        else printf("%f",x/y);
    }
    return 0;
}
#include<stdio.h>
int main()
{ 
    char oper;
printf("Enter operation to be performed +,-");
scanf("%c",&oper);
    int a,b,result;
printf("enter the two numbers");
scanf("%d%d",&a ,&b );



switch(oper)
{
    case'+':
    result=a+b;
    printf("result is %d",result);
    break;
    case'-':
    result=a-b;
    printf("result id %d",result);
    break;

    default:
    printf("invalid operation");
}
}
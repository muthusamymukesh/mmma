#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value a and b:");
    scanf("%d\n%d",&a,&b);
    (c=a),(a=b),(b=c);
    printf("The swap :%d\t%d",a,b);
}

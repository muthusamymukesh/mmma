#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value a and b:");
    scanf("%d\n%d",&a,&b);
    (a^=b),(b^=a),(a^=b);
    printf("The swap :%d\t%d",a,b);
}

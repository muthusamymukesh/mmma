#include <stdio.h>
#include<string.h>
int main()  
{
	char a[50];
	int i,count=1;
	printf(" Enter a");
  scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i] == ' ')
		count++;
	}
	printf("%d",count);
}

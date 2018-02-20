#include <stdio.h>
#include<string.h>
int main() 
{
	char b[50];
	int i,count=0,m;
	scanf("%s",b);
	m=strlen(b);
	for(i=0;i<m;i++)
	{
		if(b[i]!=' ')
		count++;	
	}
	printf("%d",count);
	
}

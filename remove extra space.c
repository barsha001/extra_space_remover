#include<stdio.h>
REMOVE_SPACE(char str[])
{
	int i,j=0;
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]==32&&j>0)
		continue;
		else if(str[i]==32)
		{
			j++;
			printf("%c",str[i]);
		}
		else
		{
			j=0;
			printf("%c",str[i]);
		}
	}
	
}
main()
{
	char str[55];
	printf("enter your preffered line/quote:-\n");
	gets(str);
	REMOVE_SPACE(str);
}


/*
The passport officer encounters a problem while verifying the passengers name-list. The problem is that the names are written with unnecessary spaces in-between which consume more time to find the space and remove it. Help the officer to finish his work faster by designing a program which can remove/delete spaces from the names.
Get name as an input and print it without any space.

Test case
Input (stdin)

John Mathew

Expected Output (stdout)

JohnMathew
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[80];
	int i=0, len, j;
	gets(str);
	len=strlen(str);
  	for(i=0; i<len; i++)
	{
      //If space is found, then shift the elements one position left
		if(str[i]==' ')
		{
			for(j=i; j<len; j++)
			{
				str[j]=str[j+1];
			}
		len--;
		}
	}
	printf("%s", str);
	return 0;
}

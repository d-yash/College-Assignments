#include <stdio.h>
int main()
{
	char s1[50],s2[50];
	int l,i,j;
	
	printf("Enter Name=");
	scanf("%[^\n]s",s1);
	
	for(i=0;s1[i]!='\0';i++);
	l=i;

	j=l-1;
	for(i=0;i<l;i++,j--)
	{
		s2[j]=s1[i];
	}
	s2[l]='\0';
	printf("\nEntered String=%s",s1);
	printf("\n\nreversed String=%s",s2);
	
	for(i=0;s1[i]==s2[i] && s1[i]!='\0';i++);
	if(s1[i]==s2[i])
	{
		printf("\n\nString Is Palindrome");
	}
	else
	{
		printf("\n\nString Is Not A Palindrome");
	}
	return 0;
}
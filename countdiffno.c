#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int n,len1,len2,count,i;
	scanf("%s%s",s1,s2);
	scanf("%d",&n);
	len1=strlen(s1);
	len2=strlen(s2);
    for(i=0;i<len1;i++)
    {
    	if(s1[i]!=s2[i])
    	{
    		count++;
		}
	}
	if(count==n)
	{
		printf("yes");
	}
	else
	printf("no");
}

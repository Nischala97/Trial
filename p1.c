#include<stdio.h>
#include<string.h>
void mingle(char s[][1000],int m,int n)
{
	char b[10000];
	int c=0,i=0,j, l;
	while(i<n)
	{
		j=0;
while(j<m)
		{
			b[c]=s[j][i];
			c++;
j++;
		}
		i++;
	}
	l=m*n;
	for(i=0;i<l;i++)
	{
		printf("%c",b[i]);
	}

	printf("\n");
}
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
	int i,j,n,m;
	char s[1000][1000];
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
	scanf("%s",s[i]);	
	}
	mingle(s,m,n);
}}

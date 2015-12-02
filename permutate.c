#include<stdio.h>
void permutate(char str[],char str1[],int count,int j,int k)
{
int i;
for(i=j;i<strlen(str1);i++)
{
if(i==k)
 continue;

if(i<strlen(str1)-2)
{
	count++;
	str[count]=str1[i];
  permutate(str,str1,count,j);
}
else
{
str[count]=str1[i];
count++;
str[count]=str1[i+1];
}

}
}
int main()
{
int i;
char str1[100],str[100];
scanf("%s",str1);
for(k=0;k<strlen(str1);k++)
{
count=0;
j=0;
str[count]=str1[k];
permutate(str,str1,count,j,k);
}
}

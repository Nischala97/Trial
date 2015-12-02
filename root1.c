#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		int  a[10000],b[10000],c[10000],s[10000],t[10000];
		int i,j,k,l,z,n;
		i=1;
		j=1;
		k=0;
		l=0;

		char q,w;

		while(i>0)
		{
			scanf("%c",&q);
			if(q=='\n')
			{
				break;
			}
			a[k]=q-'0';
			k++;

		}

		while(j>0)
		{
			scanf("%c",&w);
			if(w=='\n')
			{
				break;
			}
			b[l]=w-'0';
			l++;

		}
		if(k==l)
		{
			k=k-1;
			l=l-1;
			z=1;
			t[0]=0;
			while(k>=1)
			{
				c[z]=a[k]+b[l]+t[z-1];
				if(c[z]<10)
				{
					s[z]=c[z];
				}
				else if(c[z]>=10)
				{
					s[z]=c[z]%10;
					t[z]=c[z]/10;
				}
				z++;
				k--;
				l--;


			}
			s[0]=a[0]+b[0]+t[1];
			int g;
			printf("%d",s[0]);
			for(g=z-1;g>0;g--)
			{

				printf("%d",s[g]);
			}
			printf("\n");

		}
		else if(k>l)
		{
			n=k-l;
			for(i=0;i<l;i++)
			{
				b[i+n]=b[i];
			}
			for(j=0;j<n;j++)
			{
				b[j]=0;
				l++;
			}
			l=l-1;
			k=k-1;
			z=1;
			t[0]=0;
			while(k>=1)
			{
				c[z]=a[k]+b[l]+t[z-1];
				if(c[z]<10)
				{
					s[z]=c[z];
				}
				else if(c[z]>=10)
				{
					s[z]=c[z]%10;
					t[z]=c[z]/10;
				}
				z++;
				k--;
				l--;


			}
			s[0]=a[0]+b[0]+t[1];
			int g;
			printf("%d",s[0]);
			for(g=z-1;g>0;g--)
			{

				printf("%d",s[g]);
			}
			printf("\n");
		}
		else if(k<l)
		{
			n=l-k;
			for(i=0;i<k;i++)
			{
				a[i+n]=a[i];
			}
			for(j=0;j<n;j++)
			{
				a[j]=0;
				k++;
			}
			l=l-1;
			k=k-1;
			z=1;
			t[0]=0;
			while(k>=1)
			{
				c[z]=a[k]+b[l]+t[z-1];
				if(c[z]<10)
				{
					s[z]=c[z];
				}
				else if(c[z]>=10)
				{
					s[z]=c[z]%10;
					t[z]=c[z]/10;
				}
				z++;
				k--;
				l--;


			}
			s[0]=a[0]+b[0]+t[1];
			int g;
			printf("%d",s[0]);
			for(g=z-1;g>0;g--)
			{

				printf("%d",s[g]);
			}
			printf("\n");
		}
	}
	return 0;
}


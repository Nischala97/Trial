#include<stdio.h>
#include<string.h>
//int fun1(struct course c[],struct marks m[],int nc,int nm);
//int fun2(struct course c[],struct marks m[]);
//int fun3(struct student s[],struct marks m[]);
struct course
{
	int cid;
	char cname[1000];
};
struct student
{
	int sid;
	char sname[1000];
};
struct marks
{

	int sid,cid,mark;
};
int main()
{
int t;
	scanf("%d",&t);
	while(t--)
{
	int i,nc,ns,nm,q,que,k,j,mmax=0,v,h,temp,e;
	char ad[10000],bd[10000],cd[10000];
	struct course c[100];
	struct student s[100];
	struct marks m[100]; 
	scanf("%d %d %d %d",&nc,&ns,&nm,&q);
	for(i=0;i<nc;i++)
	{
		scanf("%d %s",&c[i].cid,c[i].cname);
	}
	for(i=0;i<ns;i++)
	{
		scanf("%d %s",&s[i].sid,s[i].sname);
	}
	for(i=0;i<nm;i++)
	{
		scanf("%d %d %d",&m[i].sid,&m[i].cid,&m[i].mark);
	}
	while(q--)
	{
		scanf("%d",&que);
		if(que==1)
		{
			scanf("%s",ad);
			for(i=0;i<nc;i++)
			{
				if(strcmp(ad,c[i].cname)==0)
				{int count=0;
					k=c[i].cid;
					for(j=0;j<nm;j++)
					{
						if(k==m[j].cid)
						{
							count++;
						}
					}
					printf("%d\n",count);
					break;
				}
				break;
			}
		}
		else if(que==2)
		{	
			scanf("%s %s",ad,bd);
			for(i=0;i<nc;i++)
			{
				if(strcmp(ad,c[i].cname)==0)
				{
					k=c[i].cid;
				}
				else if(strcmp(bd,c[i].cname)==0)
				{
					j=c[i].cid;
				}
			}int flag=0;
			for(i=0;i<nm;i++)
			{
				if(k==m[i].cid)
				{
					temp=m[i].sid;		
					for(e=0;e<nm;e++)
					{
						if(m[e].sid==temp&&m[e].cid==j)
						{
						flag++;
							}
					
					}
				}
			}
			printf("%d\n",flag);
		}
		else if(que==3)
		{
			//fun3(s,m);
			scanf("%s",cd);
			for(i=0;i<nc;i++)
			{
				if(strcmp(cd,c[i].cname)==0)
				{
					k=c[i].cid;
				}
			}

			for(i=0;i<nm;i++)
			{
				if(k==m[i].cid)
				{
					if(mmax<=m[i].mark)
					{
						mmax=m[i].mark;
						v=i;
					}
				}				
			}
			h=m[v].sid;
			for(i=0;i<ns;i++)
			{
				if(h==s[i].sid)
				{
					printf("%s\n",s[i].sname);
				}
			}


		}
	}
}}

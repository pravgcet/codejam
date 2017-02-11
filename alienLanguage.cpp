//http://code.google.com/codejam/contest/90101/dashboard#s=p0
#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;

char strn[100000][20];
int l,d;
int zz;

////////////////////////Function to generate all possible strings///////////////////////
void generate(char wr[][50], int cnt[], int w, int i,char str[],int x)
{
	//printf("In generate : %d  %d\n",w,i);
	int ll=cnt[i],cn=0;
	char all[1000];
	if(i==w-1)
	{
		for(int j=0;j<ll;j++)
		{
			str[x]=wr[i][j];
			for(int z=0;z<=x;z++)
				{
					all[z]=str[z];
				}

		for(int jj=0;jj<d;jj++)
			{
		//	printf("In generate : %d  %d %d\n",w,i,jj);
				//printf("%s %s = %d\n",all,strn[j],strncmp(all,strn[j],x+1)); 
				if(strncmp(all,strn[jj],x+1)==0)
					{
						zz++;						
					}
			}
		}
	}
	else
	{
		for(int j=0;j<ll;j++)
		{
			str[x]=wr[i][j];
			generate(wr,cnt,w,i+1,str,x+1);
		}
	}
}
///////////////////////////////////////////////////////////////////////
int match(char wr[][50], int cnt[], int w)
{
	int ct=0,qq,wc,found;
	char fc;
	//printf("Checking \n");
	for(int i=0;i<d;i++)
	{
		wc=0;qq=0;
		for(int j=0;j<l;j++)
		{
			found=0;
			fc=strn[i][j];
			for(int k=0;k<cnt[qq];k++)
			{
				if(fc==wr[qq][k])
				{
					found=1;
					qq++;wc++;
					break;					
				}
			}
			if(found==0)
			{
				break;
			}
		}
		if(wc==l){ct++;}
	//	printf("%s : %d\n",strn[i],ct);
	}
	
	return ct;
}

int main()
{
int n,cnt[10000],q,w,e;
char c,s[100000],wr[100000][50],fil[100000];
scanf("%d %d %d",&l,&d,&n);
scanf("%c",&c);
//printf("%d %d %d\n",l,d,n);


for(int i=0;i<d;i++)
{
	for(int j=0;j<l;j++)
	{
		scanf("%c",&c);
		strn[i][j]=c;
	}
//printf("%s ---- \n",strn[i]);	
scanf("%c",&c);
}

for(int ii=0;ii<n;ii++)
{
	scanf("%[^\n]s",s);
	scanf("%c",&c);
//	printf("%s\n",s);
	q=strlen(s);
//	printf("Q is : %d\n",q); 
	w=0;e=0;
	for(int i=0;i<q;i++)
	{
		e=0;
		if(s[i]=='(')
		{
			i++;
			while(s[i]!=')')
				{
					wr[w][e++]=s[i];
					i++;
				}
	//		printf("E is : %d\n",e);	
			cnt[w++]=e;
		}
		else
		{
			wr[w][e++]=s[i];
			cnt[w++]=e;
		}
	}
	
zz=0;
//generate(wr,cnt,w,0,fil,0);
zz=match(wr,cnt,w);
cout<<"Case #"<<ii+1<<": "<<zz<<endl;
//break;

}

return 0;
}

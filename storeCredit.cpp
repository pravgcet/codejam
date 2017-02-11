//http://code.google.com/codejam/contest/351101/dashboard#s=p0

#include <iostream>
#include <algorithm>
using namespace std;

int search(int ar[],int s,int e, int v)
{
int m;

	while(s<=e)
	{
		m=(s+e)/2;
		if(ar[m]==v){return m;}
		if(ar[m]<v)
		{
			s=m+1;
		}
		else
		{
			e=m-1;
		}
	}
	return -1;
}

int main()
{
int q,c,n,s,x,y,pos;
cin>>q;
for(int j=1;j<=q;j++)
{
	cin>>c>>n;
	int ar[n],br[n];
	for(int i=0;i<n;i++){cin>>ar[i];br[i]=ar[i];}
	sort(ar,ar+n);
/*	for(int i=0;i<n;i++){cout<<ar[i]<<" ";}
	cout<<endl;
*/	for(int i=n-1;i>-1;i--)
	{
		if(ar[i]<c)
		{
			s=c-ar[i];
			pos=search(ar,0,i-1,s);
//			cout<<s<<" -- "<<pos<<" + "<<i-1<<endl;
			if(pos!=-1){x=ar[pos];y=ar[i];break;}
		}
	}
if(x!=y)
	{
		for(int i=0;i<n;i++){if(br[i]==x){x=i+1;break;}}
		for(int i=0;i<n;i++){if(br[i]==y){y=i+1;break;}}
	}
else
	{
		for(int i=0;i<n;i++){if(br[i]==x){x=i+1;break;}}
		for(int i=x;i<n;i++){if(br[i]==y){y=i+1;break;}}
	}	
		
cout<<"Case #"<<j<<": "<<min(x,y)<<" "<<max(x,y)<<endl;
}

return 0;
}
















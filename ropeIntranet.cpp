//http://code.google.com/codejam/contest/619102/dashboard#s=p0

#include <iostream>
using namespace std;

int main()
{
int cnt,t,n,ar[10000],br[10000];
cin>>t;
for(int q=1;q<=t;q++)
{
cin>>n;
for(int i=0;i<n;i++){cin>>ar[i]>>br[i];}
cnt=0;
for(int i=0;i<n-1;i++)
{
	for(int j=i+1;j<n;j++)
	{
		if(ar[j]<ar[i]&&br[j]>br[i]){cnt++;}
		else if(ar[j]>ar[i]&&br[j]<br[i]){cnt++;}
	}
}

cout<<"Case #"<<q<<": "<<cnt<<endl;

}

return 0;
}


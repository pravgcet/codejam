//http://code.google.com/codejam/contest/32016/dashboard#s=p0
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
int q,n;
long long int ll;
cin>>q;
for(int w=1;w<=q;w++)
{ll=0;
cin>>n;
int ar[n],br[n];
for(int i=0;i<n;i++){cin>>ar[i];}
for(int i=0;i<n;i++){cin>>br[i];}
sort(ar,ar+n);
sort(br,br+n);
reverse(ar,ar+n);
for(int i=0;i<n;i++){ ll+=ar[i]*br[i];}
cout<<"Case #"<<w<<": "<<ll<<endl;

}

return 0;
}

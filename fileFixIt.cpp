//http://code.google.com/codejam/contest/635101/dashboard#s=p0

#include <iostream>
#include <vector>
using namespace std;

struct root
{
char nam[40];
vector < root > vc;
};

struct root* add(string s)
{

}

int main()
{
string s,s2;
int t,n,m,l;
cin>>t;
for(int q=1;q<=t;q++)
{
	cin>>n>>m;
	for(int i=1;i<n;i++)
	{
		cin>>s;
		l=s.length();
		s=i-1;
		while(s[i]!='/'){i++;}
		s2=s.substr(s+1,i-s-1);
				
	}
	
}

return 0;
}


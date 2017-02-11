//http://code.google.com/codejam/contest/351101/dashboard#s=p1

#include <iostream>
#include <sstream>
#include <cstdio>
#include <stack>
using namespace std;
int main()
{
	string s,w;
	int n;
	stack <string > st;
	scanf("%d\n",&n);
	for(int q=1;q<=n;q++)
	{
		getline(cin,s);
		stringstream ss(s);
		while(ss>>w)
		{
			st.push(w);
		}
		cout<<"Case #"<<q<<": ";
		while(!st.empty())
		{
		s=st.top();
		st.pop();
		cout<<s<<" ";
		}
		cout<<endl;	
	}
	return 0;
}



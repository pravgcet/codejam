#include <iostream>
#include <map>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
map<char, int> mp,mpa;
mp['a']=2;
mp['b']=22;
mp['c']=222;
mp['d']=3;
mp['e']=33;
mp['f']=333;
mp['g']=4;
mp['h']=44;
mp['i']=444;
mp['j']=5;
mp['k']=55;
mp['l']=555;
mp['m']=6;
mp['n']=66;
mp['o']=666;
mp['p']=7;
mp['q']=77;
mp['r']=777;
mp['s']=7777;
mp['t']=8;
mp['u']=88;
mp['v']=888;
mp['w']=9;
mp['x']=99;
mp['y']=999;
mp['z']=9999;
mp[' ']=0;

mpa['a']=2;
mpa['b']=2;
mpa['c']=2;
mpa['d']=3;
mpa['e']=3;
mpa['f']=3;
mpa['g']=4;
mpa['h']=4;
mpa['i']=4;
mpa['j']=5;
mpa['k']=5;
mpa['l']=5;
mpa['m']=6;
mpa['n']=6;
mpa['o']=6;
mpa['p']=7;
mpa['q']=7;
mpa['r']=7;
mpa['s']=7;
mpa['t']=8;
mpa['u']=8;
mpa['v']=8;
mpa['w']=9;
mpa['x']=9;
mpa['y']=9;
mpa['z']=9;
mpa[' ']=0;

int n,l;
char s[10000],c;
scanf("%d",&n);
scanf("%c",&c);
for(int q=1;q<=n;q++)
{
	//getline(cin,s);
	scanf("%[^\n]s",s);
	scanf("%c",&c);
//	printf("String is : %s \n",s);
	l=strlen(s);
	cout<<"Case #"<<q<<": ";
	cout<<mp[s[0]];

	for(int i=1;i<l;i++)
	{
		if(mpa[s[i]]==mpa[s[i-1]]){cout<<" ";}
		cout<<mp[s[i]];
	}
	cout<<endl;

}
return 0;
}

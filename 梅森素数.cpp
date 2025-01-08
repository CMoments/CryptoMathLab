#include<bits/stdc++.h>
using namespace std;
int p[10];
int qpow(int a,int b)
{
	int ans = 1;
	while(b)
	{
		if(b & 1)
		{
			ans = ans * a;
		}
		a = a * a;
		b >>= 1;
	}
	return ans;
}
void solve()
{
	int n = 5;
	p[1] = 2;
	p[2] = 3;
	p[3] = 5;
	p[4] = 7;
	p[5] = 11;
	for(int i = 1;i <= n;++ i)
	{
		cout << qpow(2,p[i])-1 << endl;
	}
}
int main()
{
	solve();
	
	
	return 0;
}

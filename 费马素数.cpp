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
bool judge(int x)
{
	for(int i = 2;i <= sqrt(x);++ i)
	{
		if(x % i == 0)return false;
	}
	return true;
}
void solve()
{
	int n = 4;
	for(int i = 1;i <= n;++ i)
	{
		int x = qpow(2,qpow(2,i))+1;
		cout << "F[" << i << "]:" << x << endl;
		if(judge(x)){
			cout << "F[" << i << "] is a prime number" << endl;
		}else{
			cout << "F[" << i << "] is not a prime number" << endl;
		}
	}
}
int main()
{
	solve();
	
	
	return 0;
}

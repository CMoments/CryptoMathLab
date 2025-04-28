#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e3;
int p[maxn+1];
int vis[maxn+1];
int main()
{
//	cin >> n ;
	int len = 0;
	for(int i = 2;i <= maxn; i ++ )
	{
		if(vis[i] == 0)
		{
			p[++len] = i;	
//			continue;
		}
			
		for(int j = 1; i*p[j] < maxn && j <= len;j ++ )
		{
			vis[i*p[j]] = 1;
			if(i % p[j] == 0)break;
		}
		
	}
	for(int i = 1;i <= len;i ++)
	{
		cout << p[i] << " ";
	}
	
	return 0;
}

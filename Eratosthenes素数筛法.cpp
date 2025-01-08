#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e4;
bool isprime[maxn+10];
void solve(){
	memset(isprime,true,sizeof(isprime));
	isprime[0] = isprime[1] = false;
	for(int i = 2;i <= maxn;++ i){
		if(isprime[i]){
			for(int j = i * i; j <= maxn;j += i)
			{
				isprime[j] = false;
			}
		}
	}
}
int main()
{
	solve();
	for(int i = 0;i < maxn;++i)
	{
		if(isprime[i])
		{
			cout << i << " ";
		}
	}
	return 0;
}

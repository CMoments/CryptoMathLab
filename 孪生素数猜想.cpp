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
	int count100[10] = {0};
	int count1000[10] = {0};
	for(int i = 0;i < maxn;++i)
	{
		if(isprime[i]&&isprime[i+2])
		{
			cout << i << " " << i + 2 << endl;
			if(i < 1000)
			{
				count100[i/100] ++ ;
			}else if(i < 10000)
			{
				count1000[i/1000] ++ ;
			}
		}
	}
	for(int i = 0;i <= 9;++ i)
	{
		cout << "["<< i << "] "<<count100[i]  << endl;
	}
	for(int i = 0;i <= 9;++ i)
	{
		cout << "["<< i << "] "<<count1000[i] << endl;
	}
	return 0;
}

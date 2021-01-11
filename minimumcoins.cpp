#include<bits/stdc++.h>
using namespace std;
int coins[]={1,2,5,10,20,50,100,500,1000};
int n=sizeof(coins)/sizeof(coins[0]);

void functioncoins(int v)
{
	sort(coins,coins+n);
	vector<int>ans;
	for(int i=n-1;i>=0;i--)
	{
		while(v>=coins[i])
		{
			v-=coins[i];
			ans.push_back(coins[i]);

		}
	}


	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
}
int main(){
	int n=93;
	cout<<" coins required would be "<<" ";
	functioncoins(n);
	return 0;


}
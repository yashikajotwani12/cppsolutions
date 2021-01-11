#include<bits/stdc++.h>
using namespace std;
struct job{
	char id;
	int deadline;
	int profit;

};
bool cmp( job a, job b)
{return (a.profit>b.profit);

}
void printjobsequence(job arr[], int n)
{
	sort(arr,arr+n,cmp);
	int result[n];
	bool slot[n];
	for(int i=0;i<n;i++)
	{
		slot[i]=false;

	}
	for(int i=0;i<n;i++)
	{
	for(int j=min(n,arr[i].deadline)-1;j>=0;j--)
	{
		if(slot[j]==false)
		{
			result[j]=i;
			slot[j]=true;
			break;
		}

	}
}
for(int i=0;i<n;i++)
{
	if(slot[i])
	cout<<arr[result[i]].id<<" ";
}


}
int main()
{
	job arr[]= { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, 
                   {'d', 1, 25}, {'e', 3, 15}}; 

                   int n=sizeof(arr)/sizeof(arr[0]);
                   printjobsequence(arr,n);
                   return 0;
}
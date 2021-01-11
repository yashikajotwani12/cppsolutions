#include<bits/stdc++.h>
using namespace std;
struct activity{
	int start;
	int finish;
};

bool cmp(activity a1, activity a2)
{
	return (a1.finish < a2.finish);
}
void functionactivity(activity arr[], int n)
{
	sort(arr,arr+n,cmp);
	int i=0;
	cout<<"("<<arr[i].start<<" ; "<<arr[i].finish<<" ) ,";
	for(int j=1;j<n;j++)
	{
		if(arr[j].start>=arr[i].finish)
		{
			cout<<" ( "<<arr[j].start<<" ; "<<arr[j].finish<<" ) ,";

			i=j;
		}

	}
}
int main()
{
	activity arr[]={{5,9},{1,2},{3,4},{5,7},{0,6},{8,9}};
	int n=sizeof(arr)/sizeof(arr[0]);
	functionactivity(arr,n);
	return 0;
}
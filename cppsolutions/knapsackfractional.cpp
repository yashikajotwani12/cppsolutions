#include<bits/stdc++.h>
using namespace std;

struct item{
    int value;
    int weight;
    item(int Value, int Weight)
    :value(Value),
    weight(Weight){

    }
};
bool cmp(struct item a , struct item b)
{
    double r1= (double)a.value/(double)a.weight;
    double r2=(double)b.value/(double)b.weight;

    return r1>r2;
}
double functionknapsack(int w, struct item arr[], int n)
{ 
    sort(arr,arr+n,cmp);
    int currentw=0;
    double finvalue=0.0;
    for(int i=0;i<n;i++)
    {
        if( currentw +arr[i].weight<=w)
        {
            currentw+=arr[i].weight;
            finvalue+=arr[i].value;

        }
        else
        {
            int remain=w-currentw;
            finvalue+=arr[i].value*((double)(remain)/(double)arr[i].weight);
            break;
          
        }
        
    }
    return finvalue;

}


int main()
{
    int  w=50;
    item arr[]={{60,10},{100,20},{120,30}};
    int n=sizeof(arr)/ sizeof(arr[0]);
    cout<<"maximum value is"<< functionknapsack(w,arr,n);
    return 0;


}
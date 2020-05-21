#include <bits/stdc++.h>
using namespace std;

int main() {
	int n1,n2;
	cin>>n1>>n2;
	int arr[n1],arr2[n2];
	int i,j,k;
	for(i=0;i<n1;i++)
	{
	    cin>>arr[i];
	}
	for(i=0;i<n2;i++)
	{
	    cin>>arr2[i];
	}
	cin>>k;
	i=0;
	j=0;
	while(k--)
	{
	    cout<<arr[i]<<" "<<arr2[j]<<"   "<<arr[i]+arr2[j]<<"\n";
	    if((arr[i] + arr2[j+1]) < (arr[i+1] + arr2[0])  &&  i<n1-1 && j<n2-1)
	    {
	        j++;
	    }
	    else if((arr[i] + arr2[j+1]) > (arr[i+1] + arr2[0])  &&  i<n1-1 && j<n2-1)
	    {
	        i++;
	        j=0;
	    }
	    else if(j==n2-1)
	    {
	        j=0;
	        i++;
	    }
	    else
	    {
	        j++;
	    }
	}
	return 0;
}
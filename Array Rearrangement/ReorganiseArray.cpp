#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n]={-1},i,j,k=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>j;
	        if(j==0)
	        {
	            k=1;
	        }
	        if(j!=-1)
	        {
	            arr[j]=j;
	        }
	    }
	    if(k==0)
	    {
	        arr[0]=-1;
	    }
	    for(i=1;i<n;i++)
	    {
	        if(arr[i]==0)
	        {
	            arr[i]=-1;
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
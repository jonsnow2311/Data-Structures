#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n]={0},brr[n]={0},i,j,k;
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        brr[i]=arr[i];
	    }
	    sort(brr,brr+n);
	    j=0;
	    for(i=0;i<n;i++)
	    {
	        arr[j]=brr[i];
	        if(j%2==0)
	        {
	            j=j+2;
	            if(j>n-1)
	            {
	                if(n%2==0)
	                {
	                    j=n-1;
	                }
	                else
	                {
	                    j=n-2;
	                }
	            }
	        }
	        else
	        {
	            j=j-2;
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
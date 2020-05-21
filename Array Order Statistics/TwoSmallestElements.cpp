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
	    int arr[n],i,min1,min2;
	    min1=1001;
	    min2=1002;
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]<min1)
	        {
	            min2=min1;
	            min1=arr[i];
	        }
	        else if(arr[i]>min1 && arr[i]<min2)
	        {
	            min2=arr[i];
	        }
	    }
	    if(min2>1000)
	    {
	        cout<<"-1\n";
	    }
	    else
	    {
	        cout<<min1<<" "<<min2<<"\n";
	    }
	}
	return 0;
}
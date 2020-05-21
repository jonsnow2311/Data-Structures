#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n],i;
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int max1=-1,max2=-2;
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]>max1)
	        {
	            max2=max1;
	            max1=arr[i];
	        }
	        else if(arr[i]>max2 && arr[i]<max1)
	        {
	            max2=arr[i];
	        }
	    }
	    cout<<max2<<"\n";
	}
	return 0;
}
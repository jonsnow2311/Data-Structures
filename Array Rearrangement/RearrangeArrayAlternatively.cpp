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
	    long long int arr[n],i,j,k;
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int max_element = arr[n-1] + 1;
	    int max_index = n-1;
	    int min_index = 0;
	    int wic=0;
	    for(i=0;i<n;i++)
	    {
	        if(i%2==0)
	        {
	            wic=max_index;
	            if(arr[wic]<max_element)
	            {
	                arr[i] = (arr[i]*max_element) + arr[wic];
	            }
	            else
	            {
	                arr[i] = (arr[i]*max_element) + (arr[wic]/max_element);
	            }
	            max_index--;
	        }
	        else
	        {
	            wic=min_index;
	            if(arr[wic]>max_element)
	            {
	                arr[i] = (arr[i]*max_element) + (arr[wic]/max_element);
	            }
	            else
	            {
	                arr[i] = (arr[i]*max_element) + arr[wic];
	            }
	            min_index++;
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        arr[i] = arr[i]%max_element;
	        cout<<arr[i]<<" ";
	    }
	    cout<<"\n";
	    
	    
	}
	return 0;
}
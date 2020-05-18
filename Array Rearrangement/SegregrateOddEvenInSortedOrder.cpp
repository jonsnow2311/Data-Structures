#include <iostream>
using namespace std;

void merge(int arr[] , int start , int mid , int end)
{
    int n1,n2;
    n1 = mid-start + 1;
    n2 = end-mid;
    int l[n1],r[n2],i;
    for(i=0;i<n1;i++)
    {
        l[i] = arr[start+i];
    }
    for(i=0;i<n2;i++)
    {
        r[i] = arr[mid+1+i];
    }
    int j=0,k=0;
    for(i=start;i<=end;i++)
    {
        if(j<n1 && k<n2)
        {
            if(l[j]%2==0 && r[k]%2==0)
            {
                if(l[j]<r[k])
                {
                    arr[i]=l[j];
                    j++;
                }
                else
                {
                    arr[i]=r[k];
                    k++;
                }
            }
            else if(l[j]%2==1 && r[k]%2==0)
            {
                arr[i] = r[k];
                k++;
            }
            else if(l[j]%2==0 && r[k]%2!=0)
            {
                arr[i] = l[j];
                j++;
            }
            else
            {
                if(l[j]<r[k])
                {
                    arr[i]=l[j];
                    j++;
                }
                else
                {
                    arr[i]=r[k];
                    k++;
                }
            }
        }
        else if(j<n1 && k>=n2)
        {
            arr[i] = l[j];
            j++;
        }
        else if(j>=n1 && k<n2)
        {
            arr[i] = r[k];
            k++;
        }
    }
}

void mergeSort(int arr[] , int start , int end)
{
    if(start<end)
    {
        int mid;
        mid=(start+end)/2;
        mergeSort(arr , start , mid);
        mergeSort(arr , mid+1 , end);
        merge(arr , start , mid , end);
    }
    else
    {
        return;
    }
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int i,arr[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    mergeSort(arr , 0 , n-1);
	    for(i=0;i<n;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
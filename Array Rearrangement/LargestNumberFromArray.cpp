#include <bits/stdc++.h>

#include <bits/stdc++.h>
using namespace std;

bool myCompare(string x , string y)
{
    string xy,yx;
    xy=x.append(y);
    yx=y.append(x);
    
    if(xy.compare(yx) > 0 )
    {
        return true;
    }
    else
    {
        return false;
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
	    vector<string> arr;
	    string sample;
	    int i,j,k;
	    for(i=0;i<n;i++)
	    {
	        cin>>sample;
	        arr.push_back(sample);
	    }
	    sort(arr.begin() , arr.end() , myCompare);
	    
	    for(i=0;i<n;i++)
	    {
	        cout<<arr[i];
	    }
	    cout<<"\n";
	    arr.clear();
	}
	return 0;
}
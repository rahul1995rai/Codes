#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int left_index[n],right_index[n];
		int i=0,j;
		left_index[i]=arr[0];
		for(i=1;i<n;i++)
			left_index[i]=min(arr[i],left_index[i-1]);
		right_index[n-1]=arr[n-1];
		for(j=n-2;j>=0;j--)
			right_index[j]=max(arr[j],right_index[j+1]);
		i=0,j=0;
		int max_=0;
		while(i<n && j<n)
		{
			if(left_index[i]<=right_index[j])
			{
				max_=max(max_,j-i);
				//cout<<max_<<" ";
				j++;
			}
			else 
			{
			i++;
			}
		}
		cout<<max_<<endl;
			
	}
	return 0;
}

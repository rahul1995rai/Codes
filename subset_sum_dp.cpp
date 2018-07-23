#include<bits/stdc++.h>

using namespace std;

void checksum(int arr[],int n,int sum)
{
	bool dp[n+1][sum+1];
	
	for(int i=0;i<=n;i++)
		dp[i][0]=true;
	
	for(int i=1;i<=sum;i++)
		dp[0][i]=false;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			if(arr[i-1]>sum)
				dp[i][j]=dp[i-1][j];
				
			if(arr[i-1]<=sum)
				dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
				
		}
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=sum;j++)
		{
				cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}

}

int main()
{
	int n,sum;
	cin>>n>>sum;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	checksum(arr,n,sum);

	return 0;
}

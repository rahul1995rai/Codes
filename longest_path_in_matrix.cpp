#include<bits/stdc++.h>

using namespace std;
int mat[100][100],dp[100][100];

int findlongestcell(int i,int j,int n)
{
	if(i<0 || i>n-1 || j<0 || j>n-1)
		return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	if(j<n-1 &&(mat[i][j]+1==mat[i][j+1]))
		return dp[i][j]= 1+findlongestcell(i,j+1,n);
	if(j>0 &&(mat[i][j]+1==mat[i][j-1]))
		return dp[i][j]=1+findlongestcell(i,j-1,n);
	if(i<n-1 &&(mat[i][j]+1==mat[i+1][j]))
		return dp[i][j]=1+findlongestcell(i+1,j,n);
	if(i>0 &&(mat[i][j]+1==mat[i-1][j]))
		return dp[i][j]=1+findlongestcell(i-1,j,n);
		
	// if none thn return 1;
	return dp[i][j]=1;

}

int findlongestoverall(int n)
{
	int result=1;
	memset(dp,-1,sizeof dp);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(dp[i][j]==-1)
				findlongestcell(i,j,n);
			cout<<dp[i][j];
			result=max(result,dp[i][j]);
		}
	}
	cout<<result<<endl;

	return 1;
}

int main()
{
	int n;
	cin>>n;
	//int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>mat[i][j];
	}

	int x=findlongestoverall(n);
	


	return 0;
}

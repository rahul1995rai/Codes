#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int temp=0,max=INT_MIN;	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(i==0)
		{
			temp++;
		}
		else if((arr[i]==arr[i-1]) && i>=1)
		{
			temp++;
		}
		else
		{
		temp=0;
		}
		if(temp>max)
			max=temp;
	}
	cout<<max<<endl;

	return 0;
}

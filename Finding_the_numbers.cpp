#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 	int t;
 	cin>>t;
 	while(t--)
 	{
 		int n,i;
 		cin>>n;
 		n=2*n+2;
 		int arr[n];
 		for(i=0;i<n;i++)
 			cin>>arr[i];
 		int xorAll=0;
 		for(i=0;i<n;i++)
 			xorAll=xorAll^arr[i];
 		//cout<<xorAll<<"*";
 		int bit = xorAll&(~(xorAll-1));
 		int temp=xorAll;
 		xorAll=0;
 		for(i=0;i<n;i++)
 		{
 			if(arr[i]&bit)
 				xorAll=xorAll^arr[i];
 		}
 		//cout<<xorAll<<"*";
 		int x=xorAll;
 		int y=xorAll^temp;
 		if(x>y)
 			cout<<y<<" "<<x<<endl;
 		else
 			cout<<x<<" "<<y<<endl;
 		
 	
 	
 	}
	return 0;
}

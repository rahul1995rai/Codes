#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int i=0;
		stack<char> stk;
		stk.push(-1);
		int last=0,cur=0,max_=0;
		while(i<s.length())
		{
			if(s[i]=='(')
			{
				stk.push(s[i]);
				
			}
			else if(s[i]==')' && stk.top()=='(')
			{
				cur+=2;
				stk.pop();
				cout<<stk.top()<<" ";
				if(s[i+1]=='(' && stk.top()==-1 && i<=s.length()-2)
				{	
					last=last+cur;
					cur=0;
					max_=max(max_,last);
				}
				cout<<cur<<"*"<<endl;
			}
			else if(s[i]==')' && stk.top()!='(')
			{
				last=0;
				//if(!stk.empty())
				//{
				//	stk.pop();
				//}
				max_=max(max_,cur);
				cur=0;
				cout<<cur<<"**"<<endl;
			}
			i++;
		}
		if(!stk.empty())
		{
			max_=max(max_,cur);
		}

		cout<<max_<<endl;

	}


	return 0;
}
#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n=0,q=0,x=0;
	cin>>n;
	
	stack<int> st;
	
	int*a=new int[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	cin>>q>>x;
	
	int temp=1,sum=0;
	string s;
	for(int t=1;t<=q;t++)
	{
		cin>>s;
		 if(s=="Harry")
		{
			st.push(a[temp-1]);
			sum+=a[temp-1];
			temp+=1;
		}
		else if(s=="Remove")
		{
			sum=sum-st.top();
			st.pop();
		}
		
		if(sum==x)
		{
			cout<<st.size()<<"\n";
			break;
		}
	}
	if(sum!=x)
		cout<<"-1\n";
    return 0;
}

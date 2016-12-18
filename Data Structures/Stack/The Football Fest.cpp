#include <iostream>
using namespace std;

int main()
{
    int t=0,n=0,pID=0;
    cin>>t;
    int temp=0,ans=0;
    
    for(int i=1;i<=t;i++)
    {
    	cin>>n>>pID;
    	char x;
    	 temp=0,ans=0;
    	for(int j=1;j<=n;j++)
    	{
    		cin>>x;
    		if(x=='P')
    		{
    			cin>>pID;
				temp=ans;
				ans=pID;
    		}
    		else if(x=='B')
    		{
    			ans=ans+temp;
    			temp=ans-temp;
    			ans=ans-temp;
    		}
    	}
    	cout<<"Player "<<ans<<"\n";
    }
    
    return 0;
}

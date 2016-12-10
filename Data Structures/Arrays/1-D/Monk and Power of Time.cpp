#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n=0,val=0;
    vector<int> call;
    vector<int> ideal;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
    cin>>val;
    call.push_back(val);
    }

    for(int i=1;i<=n;i++)
    {
    cin>>val;
    ideal.push_back(val);
    }

    int wt=0;

    while(call.size()!=0)
    {
    	if(call[0]==ideal[0])
    	{
    		call.erase(call.begin());
    		ideal.erase(ideal.begin());
    	}
    	else
    	{
    		int k=call[0];
    		call.erase(call.begin());
    		call.push_back(k);
    	}
    	wt+=1;
    }
    cout<<wt;
    return 0;
}

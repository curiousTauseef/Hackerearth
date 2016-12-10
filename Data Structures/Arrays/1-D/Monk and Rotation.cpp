#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int nTestCases=0,n=0,k=0;
	cin>>nTestCases;

	for(int t=1;t<=nTestCases;t++)
	{
		cin>>n>>k;
		vector<int> num;

		int val=0;
		for(int i=0;i<n;i++)
		{
			cin>>val;
			num.push_back(val);
		}

		if(n<k)
		{
			for(int i=(n-1)-(k%n-1);i<=n-1;i++)
			cout<<num[i]<<" ";

			for(int i=0;i<(n-1)-(k%n-1);i++)
			cout<<num[i]<<" ";
		}
		else
		{
			for(int i=(n-1)-(k-1);i<=n-1;i++)
			cout<<num[i]<<" ";

			for(int i=0;i<n-k;i++)
			cout<<num[i]<<" ";
		}

		cout<<"\n";
	}
    return 0;
}

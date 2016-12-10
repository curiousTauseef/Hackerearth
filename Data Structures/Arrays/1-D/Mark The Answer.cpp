#include <iostream>
using namespace std;

int main()
{
	int n=0,maxD=0,skip=0,tot=0;
	cin>>n>>maxD;

	int*a=new int[n];
	for(int i=0;i<n;i++)
	cin>>a[i];

	for(int i=0;i<n;i++)
	{
		if(skip==0)
		{
			if(a[i]<=maxD)
				tot+=1;
			else
				skip=1;
		}
		else
		{
			if(a[i]<=maxD)
				tot+=1;
			else
				break;
		}
	}

	cout<<tot;
    return 0;
}

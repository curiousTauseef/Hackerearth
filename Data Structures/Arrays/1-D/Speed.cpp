#include <iostream>
using namespace std;

int main()
{
	int test_case=0,n=0;
	cin>>test_case;

	for(int t=1;t<=test_case;t++)
	{
		cin>>n;
		int*a=new int[n];
		for(int i=0;i<n;i++)
			cin>>a[i];

		int ct=1;
		for(int i=1;i<n;i++)
		{
			if(a[i]<=a[i-1])
				ct+=1;
			else
				a[i]=a[i-1];
		}
		cout<<ct<<"\n";
	}
    return 0;
}

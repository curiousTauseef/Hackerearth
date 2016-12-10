#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	long n=0,q=0,l=0,r=0,num=0;
	cin>>n>>q;

	int*a=new int[n];
	for(long i=0;i<n;i++)
	cin>>a[i];

	for(long i=1;i<=q;i++)
	{
		cin>>num;
		if(num==0)
		{
			cin>>l>>r;

			l=l-1;
			r=r-1;
			if(a[r]==0)
			cout<<"EVEN\n";
			else
			cout<<"ODD\n";
		}
		else
		{
			cin>>l;
			a[l-1]=(a[l-1]+1)%2;
		}
	}
    return 0;
}

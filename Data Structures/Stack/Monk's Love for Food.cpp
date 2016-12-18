#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> s;
	int q=0,qtype=0;
	cin>>q;
	
	for(int num=1;num<=q;num++)
	{
		cin>>qtype;
		if(qtype==1)
		{
			if(s.size()==0)
				cout<<"No Food\n";
			else
			{
				cout<<s.top()<<"\n";
				s.pop();
			}
		}
		else
		{
			cin>>qtype;
			s.push(qtype);
		}
	}
    return 0;
}

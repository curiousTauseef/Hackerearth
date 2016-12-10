#include <iostream>
#include <vector>
using namespace std;

int main()
{
   long n=0,j=0,val=0,sum=0;
   cin>>n;

   vector<int> vec;

   for(int i=0;i<n;i++)
   {
   	cin>>val;
   	vec.push_back(val);
   }

   for(int i=0;i<vec.size();)
   {
   	if(vec[i]==0)
   	{
   		vec.erase(vec.begin()+i);
   		//i-=1;
   		if(i!=0)
   		{
   		vec.erase(vec.begin()+i-1);
   		i-=2;
   		}
   		else
   		i-=1;
   	}
   	else
   	i+=1;

   }

   for(int i=0;i<vec.size();i++)
   sum+=vec[i];

   cout<<sum;
    return 0;
}

#include <iostream>
using namespace std;
int baronas(int x)
{
	int ans,i;
	ans=0;
	for(i=1;i<=x;i++)
	{
		ans=ans+i;
	}
	return ans;
}
int evolty(int x)
{
	int ans,i;
	ans=0;
	for(i=1;i<=x;i++)
	{
		ans=ans+baronas(i);
	}
	return ans;
}
int electra(int x)
{
	int ans,i;
	ans=0;
	for(i=1;i<=x;i++)
	{
		ans=ans+evolty(i);
	}
	return ans;
}
int main()
{
	cout<<electra(8);
}

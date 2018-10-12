#include <iostream>
using namespace std;
int fibbonacci(int j,int k, int l, int m)
{
	if(j>=0)
	{
		m=k+l;
		k=l;
		l=m;
		j--;
		fibbonacci(j,k,l,m);
	}
	else
	{
		return m;
	}
}

int main()
{
	int n;
	cout<<"Enter the number of elements: ";
	cin>>n;
	cout<<fibbonacci(n-2,0,1,1)<<endl;
	return 0;
}

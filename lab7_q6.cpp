#include<iostream>
using namespace std;
int reverse(int q, int p)
{
	int x;
	x=p%10;
	q=(q*10)+x;
	if (p/10==0)
	{
		return q;
	}
	else 
	{
		reverse (q , p/10);
	}
}

int main()
{
	int n,r ;
	cout<< "input the number you want to reverse";
	cin >> n;
	r=reverse (0,n);
	cout << " the reverse of your number is "<< r;
}
		
 

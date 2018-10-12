#include<iostream>
using namespace std;
int sumnatural(int i ,int j , int sum)
{
	if(i>j)	
	{	
	return sum;
	}
	else	
	{
	sum+=i;
	i++;
	sumnatural(i,j,sum);
	}
	
}
int main()
{
	int j ,sum;
	cout <<"what is the number till you want to sum ?";
	cin >> j;
	sum =sumnatural(1,j,0);
	cout << sum;
} 

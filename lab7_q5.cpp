#include<iostream>
using namespace std;
int sumnaturalevenodd(int i ,int j , int sum)
{
	if(i>=j)	
	{	
	return sum;
	}
	else	
	{
	sum+=i;
	i+=2;
	sumnaturalevenodd(i,j,sum);
	}
}
int main ()
{
	int j ,k , sumeven, sumodd;
	cout <<"what are the number between which u want to sum? ";
	cin>> j >>k;
	if(j%2==0)
	{
		j+=2;
	}
	else
	{
		j+=1;
	}
	sumeven=sumnaturalevenodd(j,k,0);
	cout << " sum of even numbers in the given range is -" <<sumeven<< endl; 
	
	if(j%2==1)
	{
		j+=2;
	}
	else
	{
		j+=-1;	
	}
	sumodd=sumnaturalevenodd(j,k,0);	
	cout << "sum of odd numbers in the given range is -" <<sumodd<< endl; 
}



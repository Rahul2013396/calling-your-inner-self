#include<iostream>
using namespace std;
int evenoddnumbers(int j , int k)
{
	if (j>k)
	{
	return 1;
	}
	else
	{
	cout <<j<< endl;
	j+=2;
	evenoddnumbers(j ,k);
	}
}
int main ()
{
	int j ,k;
	cout <<"what are the number between which u want numbers to print? ";
	cin>> j >>k;
	if(j%2==0)
	{
	j=j;
	}
	else
	{
	j+=1;
	}
	cout << "even numbers in the given range are -" << endl; 
	evenoddnumbers(j ,k);

	if(j%2==0)
	{
	j+=1;
	}
	else
	{
	j=j;
	}
	cout << "odd numbers in the given range are -" << endl; 
	evenoddnumbers(j ,k);		

}


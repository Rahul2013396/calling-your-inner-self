#include<iostream>
using namespace std;
//declaring the function
int naturalnumbers(int i , int j)
{
	//condition to break the recursion
	if (i>j)
	{
	return 1;
	}
	else
	{
	cout <<i<< endl;
	i++;
	//recursion of function
	naturalnumbers(i ,j);
	}
}
int main ()
{
	int j;
	//input
	cout <<"what is the number till where u want numbers to print? ";
	cin>> j;
	// calling the function 
	naturalnumbers(1 ,j);
}

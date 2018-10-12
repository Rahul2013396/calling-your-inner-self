#include<iostream>
using namespace std;
//declaring the function
int power(int num,int pow)
{
	int y=pow;
	//condition to break the recursion loop 
	if (y==0)
	{
		return 1;
	}
	else 
	{
	// recursion of power function
	 return num*power(num ,pow-1);
	}
}
	
int main ()
{
	int a ,b, c;
	//input
	cout << "what is the number ? ";
	cin>>a;
	cout << "what is the power ? ";
	cin>> c;
	//assigning the value of function to a variable
	b= power(a,c);
	//output
	cout << "factorial of the number is " << b;
}

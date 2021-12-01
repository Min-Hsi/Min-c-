#include<iostream>
#include<cmath>
using namespace std;
double fun(double n)
	{
	return 3*sin(n)-log(cos(3*n)+3+log(cos(5*n)+2));
	}	
int main()
{
	double temp=1;
	double dx=0.0001,xn=-1,x,df,y0,y1;
	do
	{
		y0=fun(xn);
		y1=fun(xn+dx);
		df=(y1-y0)/dx;
		x=xn-y0/df;
		temp=abs(x-xn);
		xn=x;
	}while(temp>0.00005);
	cout<<"the root of function = "<<x<<endl;	
	return 0;
}

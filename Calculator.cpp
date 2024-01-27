#include<iostream>
#include<cmath>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of Input : [ 1 (or) 2 ] : ";
	cin>>n;
	if(n==1)
	{
		
			int n1;
			cout<<"Enter the Value : ";
			cin>>n1;
			cout<<"FOR SQUARE-ROOT : PRESS [ | ]"<<endl<<"FOR CUBE-ROOT : PRESS [ / ]"<<endl;
			char op;
			cout<<"Ente the Operator : ";
			cin>>op;
			if(op=='|')
			{
				cout<<"Your Result is : "<<sqrt(n1)<<endl;
			}
			else if(op=='/')
			{
				cout<<"Your Result is : "<<cbrt(n1)<<endl;
			}
			else
			{
				cout<<"Wrong operator..!";
			}cout<<"Your Project is over !";
	}
	else if(n==2)
	{
			int n1,n2;
			cout<<"Enter the Two Values : ";
			cin>>n1>>n2;
			cout<<"FOR ADDITION [+]"<<endl<<"FOR SUBTRACTION [-]"<<endl<<"FOR MULTIPLICATION [*]"<<endl<<"FOR DIVISION [/]"<<endl<<"FOR MODULOUS [%]"<<endl<<"FOR POWER [^]"<<endl;
			char op;
			cout<<"Enter the Operator : ";
			cin>>op;
			if(op=='+')
			{
				cout<<"Your Result is : "<<n1+n2;
			}
			else if(op=='-')
			{
				cout<<"Your Result is : "<<n1-n2;
			}
			else if(op=='*')
			{
				cout<<"Your Result is : "<<n1*n2;
			}
			else if(op=='^')
			{
				cout<<"Your Result is : "<<pow(n1,n2);
			}
			else if(op=='/')
			{
				cout<<"Your Result is : "<<n1/n2;
			}
			else if(op=='%')
			{
				cout<<"Your Result is : "<<n1%n2;
			}
			else 
			{
				cout<<"Wrong operator...! ";
			}
		cout<<endl<<"Your Project is over..!";
	}
}

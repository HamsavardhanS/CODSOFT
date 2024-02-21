#include <bits/stdc++.h>
using namespace std;
void add(list<string> &a)
{
	cout<<endl;
	string n;
	cout<<"ENTER THE NEW TASK: ";
	cin>>n;
	a.push_back(n);
	cout<<"TASK ADDED SUCCESSFULLY"<<endl;
}
void display(list<string> &a,int *p)
{
	cout<<endl;
	list<string>::iterator it;
	int i=1;
	for(it=a.begin();it!=a.end();it++)
	{
		if(p[i]==0)
		{
			cout<<*it<<" - "<<"PENDING\n";
		}
		else if(p[i]==1)
		{
			cout<<*it<<" - "<<"COMPLETED\n";
		}
		i++;
	}
	cout<<endl;
}
void mark(list<string> &a,int *p)
{
	cout<<endl;
	list<string>::iterator it;
	int i=1;
	for(it=a.begin();it!=a.end();it++)
	{
		cout<<i<<" - "<<*it<<"\n";
		i++;
	}
	cout<<"ENTER THE TASK NUMBER TO BE MARKED AS COMPLETED: ";
	int num;
	cin>>num;
	p[num]=1;
	cout<<"TASK MARKED COMPLETED SUCCESFULLY"<<endl;
}
void rem(list<string> &a,int *p)
{
	cout<<endl;
	list<string>::iterator it;
	int i=1;
	for(it=a.begin();it!=a.end();it++)
	{
		cout<<i<<" - "<<*it<<"\n";
		i++;
	}
	cout<<"ENTER THE TASK NUMBER TO BE REMOVED: ";
	int num;
	cin>>num;
	p[num]=2;
	cout<<"TASK REMOVED SUCCESFULLY"<<endl;	
}
int main()
{
	list <string> a;
	a.push_back("Workout");
	a.push_back("Assignment");
	a.push_back("Preparation");
	int p[100];
	for(int i=0;i<100;i++)
	{
		p[i]=0;
	}
	while(true)
	{
		int ch;
		cout<<"PRESS 1 TO ADD NEW TASK\nPRESS 2 TO DISPLAY ALL TASKS\nPRESS 3 TO MARK A TASK AS COMPLETED\nPRESS 4 TO REMOVE A TASK\nPRESS 5 TO END\nEnter your choice:";
		cin>>ch;
		if(ch==1)
		{
			add(a);
		}
		else if(ch==2)
		{
			display(a,p);
		}
		else if(ch==3)
		{
			mark(a,p);
		}
		else if(ch==4)
		{
			rem(a,p);
		}
		else if(ch==5)
		{
			cout<<"THANK YOU FOR USING";
			break;
		}
		else
		{
			cout<<"CHOOSE A VALID CHOICE\n";
		}
	}
}

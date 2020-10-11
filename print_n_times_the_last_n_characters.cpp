#include<iostream>
#include<string.h>
using namespace std;

string repeatN(const string& s,int N)
{
	string result="not done";
	//my code goes here
	int l=s.length();
	int start=l-N;
	result=s.substr(start,l);
	//
	return result;
	
}

int main()
{
	string s1;
	int n;
	cout<<"enter a string: ";
	cin>>s1;
	cout<<"enter a number: ";
	cin>>n;
	string s2=repeatN(s1,n);
	for(int i=0;i<n;i++)
	{
		cout<<s2;
	}
	return 0;
}

#include<iostream>
using namespace std;

int main()
{
	// declaring the array n
	int arr[]={4,9,15,16,20,22,25,32,45,64,72,80,100,128,256};
	int i;
	
	for(i=0;i<15;i++)
	{
		cout<< arr[i] << " is power of 2 : ";
		// use of bitwise AND (&) operator
		if((arr[i] & (arr[i]-1))==0) 
			cout<<"True"<<endl;
		else
			cout<<"False"<<endl;
	}
	
	return 0;	
}


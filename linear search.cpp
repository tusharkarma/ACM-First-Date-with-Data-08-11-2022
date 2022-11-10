#include<iostream>
using namespace std;
int main()
{
	int n, i, num, t, count;
	cout<<"number of element in array\n";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter number to be searched"<<endl;
	cin>>num;
	if(a[i]==num)
	{
		cout<<a[i]<<"is found at"<<i<<endl;
		count=1;
	}
	if(count!=1){
		cout<<num<<" is not found"<<endl;
	}
	return 0;
}

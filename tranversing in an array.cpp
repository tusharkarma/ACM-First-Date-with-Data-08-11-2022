#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"number of element in array\n";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"traversing array"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	return 0;
}

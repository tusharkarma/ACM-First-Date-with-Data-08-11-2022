#include<iostream>
using namespace std;
int main()
{
	int n, i, num, low, mid, high;
	cout<<"number of element in array\n";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"enter number to be searched"<<endl;
	cin>>num;
	low=0;
	high=n;
	while(low<=high)
	{
		mid=((low+high)/2);
		if((num)==a[mid])
			break;
		else{
			if(a[mid]<num)
				low=mid+1;
			else
				high=mid-1;}
	}
	if(low>high)
	{
		cout<<num<<" element not found";
	}else{
		cout<<num<<" element found";
	}
	return 0;
}

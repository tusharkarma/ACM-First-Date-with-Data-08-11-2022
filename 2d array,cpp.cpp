#include<iostream>
using namespace std;
int main()
{
	int i, j, r, c;
	cout<<"number of rows in array\n";
	cin>>r;
	cout<<"number of column in array\n";
	cin>>c;
	int a[r][c];
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin>>a[i][j];
	for(i=0;i<r ;i++)
	{
		for(j=0;j<c;j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
	return 0;
}

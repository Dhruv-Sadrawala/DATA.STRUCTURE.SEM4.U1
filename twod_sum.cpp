#include <iostream>
using namespace std;
int main()
{
	int arr[20][20],sum=0,rows=0,columns=0;
	cout<<"Enter number of rows in matrix:";
	cin>>rows;
	cout<<"Enter number of rows in columns:";
	cin>>columns;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
		cout<<"Enter element:";
		cin>>arr[i][j];
		}
	}

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
		sum+=arr[i][j];
		}
	}
	cout<<"Sum of 2 dimensional array is:"<<sum<<endl;
	return 0;
}
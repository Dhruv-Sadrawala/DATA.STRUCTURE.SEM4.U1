#include <iostream>
using namespace std;
int main()
{
	int arr[20][20],rows=0,columns=0,flag=0,flagos=0;
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
		cout<<" "<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
		if (arr[i][j]==0)
		{
			flag++;
		}
		else
			flagos++;
		}
	}

	if (flag>flagos)
	{
		cout<<"Above matrix is a sparsed matrix"<<endl;
	}
	else
		cout<<"Above matrix is not a sparsed matrix"<<endl;

	return 0;
}
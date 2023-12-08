#include <iostream>
using namespace std;
int main()
{
	int arr[20],num,sum=0;
	cout<<"Enter number of elements in array:";
	cin>>num;

	for (int i = 0; i < num; ++i)
	{
		cout<<"Enter element:";
		cin>>arr[i];
	}

	for (int i = 0; i < num; ++i)
	{
		sum+=arr[i];
	}

	cout<<"Sum of 1 dimensional array is:"<<sum<<endl;
	return 0;
}
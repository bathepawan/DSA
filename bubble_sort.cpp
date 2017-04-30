#include<iostream>

using namespace std;

int main()
{
	int n,i,j,k,t;
	cout << "Enter the size of array"<<endl;
	cin >> n;
	int *arr = new int[5];
	for(i=0;i<n;i++)
		cin>>arr[i];
        cout<<"Original Array"<<endl;
	for(i=0;i<n;i++)
	cout<<arr[i]<<"\t";
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
		cout<<endl<<"Pass "<<i+1<<":"<<endl;
		for(k=0;k<n;k++)
		{
			cout<<arr[k]<<"\t";
		}
		cout<<endl;

	}
	cout << "Sorted Array: "<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
	return 0;
}

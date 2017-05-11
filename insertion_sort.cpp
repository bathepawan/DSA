#include<iostream>

using namespace std;

int main()
{
	int n,i,j,k,t,key;
	cout << "Enter the size of array"<<endl;
	cin >> n;
	int *arr = new int[5];
	for(i=0;i<n;i++)
		cin>>arr[i];
        cout<<"Original Array"<<endl;
	for(i=0;i<n;i++)
	cout<<arr[i]<<"\t";
	
	for(i=1;i<n;i++)
	{
		key = arr[i];
		j = i-1;
		while(j>=0 && arr[j]>key )
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	cout << "Sorted Array: "<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
	return 0;
}

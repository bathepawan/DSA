#include<iostream>

using namespace std;

void merge(int arr[],int l,int m,int h)
{
	int i,j,k;
	int n1= m-l+1;
	int n2= h-m;
	cout<<"l,m,h,"<<l<<" "<<m<<" "<<h<<endl;
	int L[n1],R[n2];
	for(i=0;i<n1;i++)
		L[i]=arr[l+i];
	for(j=0;j<n2;j++)
		R[j]=arr[m+1+j];
	
	i=0;
	j=0;
	k=l;
	while(i < n1 && j < n2)
	{
		if(L[i] <= R[j])
		{
			arr[k]=L[i];
			i++;
		}else
		{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k]=R[j];
		j++;
		k++;
	}
}

void merge_sort(int arr[],int l,int h)
{
	if(l<h)
	{
		int m = l+(h-l)/2;
		merge_sort(arr,l,m);
		merge_sort(arr,m+1,h);
		merge(arr,l,m,h);
	cout<<endl<<"Sorted these now"<<endl;
	for(int i=l;i<=h;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	}
		
}

int main()
{
	int n,i;
	cout << "Enter the size of array"<<endl;
	cin >> n;
	int arr[n];
	//int arr[] = [9,4,5,3,2,6,7,8];
	//int size = sizeof(arr)/sizeof(arr[0]);
	
	for(i=0;i<n;i++)
		cin>>arr[i];

    cout<<"Original Array"<<endl;
	for(i=0;i<n;i++)
	cout<<arr[i]<<"\t";
	
	merge_sort(arr,0,n-1);
	cout << "Sorted Array: "<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
	return 0;
}

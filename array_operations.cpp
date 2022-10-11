#include<iostream>
using namespace std;

void display(int a[], int size)
{
	cout<<"Your array: "<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void DeleteArray(int a[],int *size,int position)
{
//	int ele = a[position - 1];
	for(int i=position - 1; i<*size; i++)
	{
		a[i] = a[i+1];
	}
	*size -= 1;
		
}

void search(int a[], int size, int element)
{
	for (int i=0; i<size; i++)
	{
		if(element == a[i])
		{
			cout<<"Element found at: "<<i<<endl;
		}
	}
}

int main()
{
	int size=0;
	cout<<"enter array size: "<<endl;
	cin>>size;
	int* array = new int[size];
	
	cout<<"Enter array: "<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>array[i];
	}
	
	display(array, size);
	DeleteArray(array,&size,5);
	display(array, size);
	search(array,size,40);
	return 0;
}

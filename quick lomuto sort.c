#include<stdio.h>
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int lomuto_partition(int *arr,int l,int r)
{
	int pivot=arr[r];
	int i=l-1,j;
	  for(j=l;j<r;j++)
	{
			if(arr[j]<pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
		swap(&arr[i+1],&arr[r]);
	    return i+1;
}
void quick_sort(int *arr,int l,int r)
{
	if(r>l)
	{
		int p=lomuto_partition(arr,l,r);
		quick_sort(arr,l,p-1);
		quick_sort(arr,p+1,r);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	{
		scanf("%d",&arr[i]);
	}
	quick_sort(arr,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}

///*#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int a[n],i;
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for(i=0;i<n;i++)
//	{
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	int j,temp,flag;
//	for(i=0;i<n-1;i++)
//	{
//		flag=0;
//		for(j=0;j<n-1-i;j++)
//		{
//			if(a[j]>a[j+1])
//			{
//				temp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=temp;
//				flag=1;
//			}
//		}
//		if(flag==0)
//		break;
//	}
//	for(i=0;i<n;i++)
//	{
//		printf("%d ",a[i]);
//	}
//}*/
//
//#include<stdio.h>
//int print_array(int *a,int n)
//{
//	int i;
//	for(i=0;i<n;i++)
//	{
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//}
//int bubble_sort(int *a,int n)
//{
//	int i,j,temp,flag;
//	for(i=0;i<n-1;i++)
//	{
//		flag=0;
//		printf("Pass %d:\n",i+1);
//		for(j=0;j<n-1-i;j++)
//		{
//			if(a[j]>a[j+1])
//			{
//				temp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=temp;
//				flag=1;
//			}
//			print_array(a,n);
//		}
//		if(flag==0)
//		break;
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int i,a[n];
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	bubble_sort(a,n);
//	printf("The Ascending Order:");
//	for(i=0;i<n;i++)
//	{
//		printf("%d ",a[i]);
//	}
//}

#include <stdio.h>
void bubble_sort(int *arr, int n)
{
	int temp,i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(	arr[j]>arr[j+1])
			{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
			}
		}
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}	
}


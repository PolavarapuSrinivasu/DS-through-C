#include<stdio.h>
int insertion_sort(int *a,int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		int key=a[i];
		for(j=i-1;;j--)
		{
			if(a[j]<key || j==-1)
			{
				a[j+1]=key;
				break;
			}
			else
			{
				a[j+1]=a[j];
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
}

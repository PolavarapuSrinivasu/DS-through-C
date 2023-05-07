#include<stdio.h>
void insertion_sort(char *a,int n)
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
	char a[n];
	scanf("%s",a);
	insertion_sort(a,n);
	printf("%s",a);
}

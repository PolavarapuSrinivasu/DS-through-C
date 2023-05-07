#include<stdio.h>
//#define min(a,b) a < b ? a : b
//int min(int a, int b)
//{
//	return a < b ? a : b;
//}
int min(int a,int b)
{
	if(a<b) return a;
	else return b;
}
int fib_search(int *arr,int n,int se)
{
	int a,b,c;
	a=0;
	b=1;
	c=a+b;
	while(c<n)
	{
		a=b;
		b=c;
		c=a+b;
			
	}
	int offset=-1;
	while(c>1)
	{
	   int i=min(offset+a,n-1);
	   if(se==arr[i])
	   {
	      return i;
	   }
	   //if searching element greater than arr[index] Bring  all 3 fibonacci variables 1 fib down
	   else if(se>arr[i])
	   {
	    	c=b;
	    	b=a;
	   	    a=c-b;
	   	    //set offset to index
	     	offset=i;
	   }
	   //if searching element less than arr[index] Bring  all 3 fibonacci variables 2 fib down
	   else
	   {
	    	c=a;
	    	b=b-a;
	    	a=c-b;    // 50 58 64 74 80 100 123 147
	   }
    }  
    if(b && arr[offset+1] == se)
    {
        return offset+1;
    }
    return -1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int se;
	scanf("%d",&se);
    int res=fib_search(arr,n,se);
	if(res==-1)
	{
	    printf("Element not found");	
	}	
	else
	{
		printf("Element found at : %d",res);
	}
}

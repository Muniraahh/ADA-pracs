#include<stdio.h>
#include<sys/time.h>
#define size 10
void insertion(int arr[],int n);
int main()
{
	int n,arr[size],i,t1,t2;
	struct timeval tt;
	struct timezone tz;
	printf("Enter the number of elements");
	scanf("%d",&n);
	
	printf("\n Enter the elements of array");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	gettimeofday(&tt,&tz);
	t1=tt.tv_usec;
	
	insertion(arr,n);
	
   gettimeofday(&tt,&tz);
	t2=tt.tv_usec;
	
	printf("\n Time taken by selection sort: %d",t2-t1);
	
	return 0;
	
}

void insertion(int arr[],int n)
{
	int i,j,min,temp,k;
	
	for(i=0;i<n;i++)
	{
		printf("\n selection sort phase: %d   ",i+1);
		min=i;
		
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			min=j;
		}
		
		
		
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	    
		for(k=0;k<n;k++)
		printf("%d \t",arr[k]);
		
		printf("\n");
	} 
	
	printf("\n sorted array:");
	for(i=0;i<n;i++)
	printf("\t %d",arr[i]);
	
	printf("\n");
}

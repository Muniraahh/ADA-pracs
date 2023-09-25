#include<stdio.h>
#include<conio.h>
#include<sys/time.h>
#define size 10
void insertion( int arr[],int n);
int main()
{
	struct timeval tt;
	struct timezone tz;
	int arr[size],n,i,t1,t2;
	printf("ENTER THE TOTAL NUMBER OF ELEMENTS : ");
	scanf("%d",&n);
	
    printf("\n ENTER THE ELEMENTS OF ARRAY :\n");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    gettimeofday(&tt,&tz);
    t1=tt.tv_usec;
    
    insertion(arr, n);
    
    gettimeofday(&tt,&tz);
    t2=tt.tv_usec;
    
    printf("\n Time taken by Insertion sort : %d \n", t2-t1);
}

void insertion(int arr[],int n)
{
	int i,j,k,count=0,temp;
	for(i=0;i<n;i++)
	{
		temp=arr[i];
		printf("\n Insertion sort Phase : %d \n",i+1);
		for(j=i-1;j>=0;j--)
		{
			if(arr[j]>temp)
			{
				arr[j+1]=arr[j];
			}
			
			else
			break;
			
	    
	    } count++;
	    
		arr[j+1]=temp;
			for(k=0;k<n;k++)
		printf("%d \t",arr[k]);
		
		printf("\n");
		
	
	}
		
		
	printf("\n SORTED ARRAY :");
	for(i=0;i<n;i++)
	{
		printf("\t %d",arr[i]);
	}
	
	printf(" \n Total count = %d",count);
}


#include<stdio.h>
#define size 10
int findmax(int arr[],int st,int ed); 
int findmin(int arr[],int st,int ed);
int main()
{
	int arr[size],i,n,rel,choice;
	printf("ENTER THE TOTAL NUMBER OF ELEMENTS : ");
	scanf("%d",&n);
	printf("ENTER THE ELEMENTS OF ARRAY :\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	while(1)
	{
	printf("\n------ENTER YOUR CHOICE------\n");
	printf("1)Find Maximum\n");
	printf("2)Find Minimum\n");
	printf("3)exit");
	scanf("%d",&choice);
	
	switch(choice)
	{
	case 1:
	       rel=findmax(arr,0,n-1);
	
	       printf("\n Maximum number is: %d",rel);
           break;
    
    case 2:
    	   rel=findmin(arr,0,n-1);
       	   printf("\n Minimum number is: %d",rel);
	       break;
	       
	case 3: return 0;
}
}
}
int findmax(int arr[],int st,int ed)
{

	int mid,max1,max2;
	if(st==ed)
	return arr[st];
	
	else if(st==ed-1)
	{
		if(arr[st]>arr[ed])
		return arr[st];
		
		else
		return arr[ed];
	}
	
	else
	{
		mid=(st+ed)/2;
		
		max1=findmax(arr,st,mid);
		
		max2=findmax(arr,mid+1,ed);
		
		if(max1>max2)
		return max1;
		
		else
		return max2;
	}
}

int findmin(int arr[],int st,int ed)
{
	int mid,min1,min2;
	
	if(st==ed)
	return arr[st];
	
	else if(st==ed-1)
	{
		if(arr[st]>arr[ed])
		return arr[ed];
		
		else
		return arr[st];
	}
	
	
	else
	{
		mid=(st+ed)/2;
		
		min1=findmin(arr,st,mid);
		
		min2=findmin(arr,mid+1,ed);	
		
		if(min1>min2)
		return min2;
		
		else
		return min1;
		}
}

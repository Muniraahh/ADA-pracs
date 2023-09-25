#include<stdio.h>
#include<sys/time.h>
int bubble1(int arr[],int);
int bubble2(int arr[],int);
int bubble3(int arr[],int);
int main()
{
	int a[1000], number, i, temp, choice, t1, t2, t3, t4, t5, t6;
	struct timeval tt;
    struct timezone tz;
	printf("\n ENTER THE TOTAL NUMBER OF ELEMENTS YOU WANT TO SORT : ");
	scanf("%d", &number);
	printf("\n ENTER THE ARRAY ELEMENTS :\n");
	for(i=0;i<number;i++)
	scanf("%d", &a[i]);
	
	printf("\n ENTER YOUR CHOICE FOR WHICH TYPE OF SORTING YOU REQUIRE : \n");
	printf("\n 1.CLASSICAL BUBBLE SORT \n");
	printf("\n 2.SEMI-OPTIMIZED BUBBLE SORT \n");
	printf("\n 3.OPTIMIZED BUBBLE SORT \n");
	printf("\n 4.EXIT\n");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			gettimeofday(&tt,&tz);
            t1=tt.tv_usec;
			bubble1(a,number);
			gettimeofday(&tt,&tz);
            t2=tt.tv_usec;
            printf("Time taken by Classical Bubble sort = %d \n",t2-t1);
			break;
			
		case 2:
			gettimeofday(&tt,&tz);
            t3=tt.tv_usec;
			bubble2(a,number);
			gettimeofday(&tt,&tz);
            t4=tt.tv_usec;
            printf("Time taken by Semi-Optimised Bubble sort = %d \n", t4-t3);
			break;
			
		case 3:
			gettimeofday(&tt,&tz);
            t5=tt.tv_usec;
			bubble3(a,number);
			gettimeofday(&tt,&tz);
            t6=tt.tv_usec;
            printf("Time taken by Optimised Bubble sort = %d \n",t6-t5);
			break;
			
		case 4:
			return 0;
	}
}

int bubble1(int a[],int n)
  {
  	int i,j,k,temp,count=0;
        for(j=0;j<n-1;j++)
        {  
            printf("PHASE:%d \n",j+1);
                for(k=0;k<n-1;k++)
                {
                        if(a[k]>a[k+1])
                        {
                                temp=a[k];
                                a[k]=a[k+1];
                                a[k+1]=temp;
                        } count++;
                for(i=0;i<n;i++)
                printf("%d \t",a[i]);
                printf("\n");
                }
	    }
        printf("THE SORTED ELEMENTS ARE : ");
        for(j=0;j<n;j++)
        {
            printf(" %d \t ",a[j]);    
        }
        printf("\n Total count: %d \n",count);
        return 1;
}

int bubble2(int a[],int n)
{
        int j,k,i,temp,count=0;
        for(j=0;j<n-1;j++)
        {
        	printf("PHASE:%d \n",j+1);
                for(k=0;k<n-j-1;k++)    
                {
                	if(a[k]>a[k+1])
                        {
                            temp=a[k];
                            a[k]=a[k+1];
                            a[k+1]=temp;
                        } count++;
                        
                        for(i=0;i<n;i++)
                        printf("%d \t",a[i]);
                        printf("\n");
                }
        }
        printf("\n THE SORTED ELEMENTS ARE: ");
        for(j=0;j<n;j++)
        {
            printf(" %d ",a[j]);    
        }
        printf("\n");
        printf("Total count:%d \n",count);
        return 1;
}

int bubble3(int a[],int n)
{
        int j,k,i,temp,flag,count=0;
        for(j=0;j<n-1;j++)
        {
        	printf("PHASE:%d \n",j+1);
        	    int flag=0;
                for(k=0;k<n-j-1;k++)    
                {
                	if(a[k]>a[k+1])
                        {
                        	flag=1;
                            temp=a[k];
                            a[k]=a[k+1];
                            a[k+1]=temp;
                        } count++;
                        
                        for(i=0;i<n;i++)
                        printf("%d \t",a[i]);
                        printf("\n");
                }
        if (flag==0)
        {
        	break;
		}
	    }
        printf("\n THE SORTED ELEMENTS ARE: ");
        for(j=0;j<n;j++)
        {
            printf(" %d ",a[j]);    
        }
        printf("\n");
        printf("Total count:%d \n",count);
        return 1;
}


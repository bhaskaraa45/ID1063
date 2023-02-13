#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSIZE 20

int main() {
    int size;
    int arr[MAXSIZE];
    int i;
    
    while(scanf("%d",&size)!=-1) {
        for (i=0;i<size;i++) {
            scanf("%d",&arr[i]);
        }
        


int x,count=0,k=1;
i=0;
        while(1)
        {	
			x=0;
            for (int j = 2; j <= arr[i]/2; j++)
			{ 
    			if (arr[i]%j==0)
    			{
       				x++;
    			}
			}
			if (arr[i]==1 )
			{
				x++;
			}
            
			

			if (x==0)
			{
				// printf("%d ",arr[i]);
				i++;
				count++;

			}else{
				int temp = arr[i];
				arr[i]=arr[size-k];
				arr[size-k]=temp;
				k++;
			}
			if (k+i>size)
			{
				break;
			}
			

			

        }

		for (int i = 0; i < count; i++)
		{
			for (int j = i+1; j < count; j++)
			{
				if (arr[i]>arr[j])
				{
					int temp = arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
				
			}
			
		}

		for (int i = count; i < size; i++)
		{
			for (int j = i+1; j < size; j++)
			{
				if (arr[i]<arr[j])
				{
					int temp = arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
				
			}
			
		}
		



        

		for (int i = 0; i < size; i++)
		{
		
		    printf("%d ",arr[i]);
		}

		if(size==0){
    	printf("no numbers\n");
		}
		else
        	printf("\n");
    }

        
    return 0;
}


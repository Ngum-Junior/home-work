#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

int main()
{
	int array[10];
	int x;
	int sum=0;
	int average;
	int largest;
	int second;
	largest=array[10];
	second=array[10];
		for(x=0;x<10;++x){		
	printf("enter the elements  \n",x);
	scanf("%d",&array[x]);
	if(largest>array[10]){
		second=largest;
		largest=array[x];
	}else if(array[10]>second&&array[10]<largest){
	}
	second=array[x];
	}
	for(x=0;x<10;++x){
		 sum=sum+array[x];
		  average=sum/10;
	printf("%d \t",array[x]);
    	printf("the sum is %d \t",sum);
		printf("the average is %d \t",average);
		printf("the largest number \n",largest);
		printf("the second largest number \n",second);
		}	
}

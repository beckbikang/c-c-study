#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc,char *argv[])
{
	clock_t start,finish;
	double  duration; 
	start = clock();
	int N= 1000;
	int count=0,i,j,k;
	for(i=0;i<N;i++)
	    for(j=0;j<N;j++)
	        for(k=0;k<N;k++)
		  count++;
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;  
	printf("%d\n",CLOCKS_PER_SEC);
   	printf( "%f seconds\n", duration );  
   	system("pause");  	
	return 1;
}

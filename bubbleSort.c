#include<stdio.h>
#include<time.h>
void main(){
	int a[10]={1,4,2,9,2,12,2,7,34,90};
	BubbleSort(a,5);
}
void BubbleSort(int a[],int num){
	long  a,b;
	a=clock();
	int i,j;
	for(i=1;i<num;i++){
		for(j=num-1;j>=1;j--){
			if(a[j]>a[j+1]){
					int temp=a[i];
					a[i]=a[j];
					a[j]=temp;
					}
					
			}
		
		}
	    b=clock();

		long c=b-a;
		printf("运行时间是：");
		printf("%ld\n",c);
		}


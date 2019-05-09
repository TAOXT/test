#include<stdio.h>
#include<time.h>
void BubbleSort(int *a,int num);
int main(){
	int a[10]={1,4,2,9,2,12,2,7,34,90};
	BubbleSort(&a[0],10);

	return 0;
}
void BubbleSort(int *a,int num){
	long start,end;
	start=clock();
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
	    end=clock();

		long c=end-start;
		printf("运行时间是：");
		printf("%ld\n",c);
		}


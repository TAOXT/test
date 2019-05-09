#include<stdio.h>
#include<time.h>
void SelectSort(int *a,int num);
int main(){
	int a[10]={1,4,2,6,78,34,45,23,1,90};
	SelectSort(a,10);
}
void SelectSort(int *a,int num){
	int start=clock();
	for(int i=0;i<num;i++){
		for(int j=i+i;j<num;j++){
			if(a[i]<a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	
	}
	int end=clock();
	printf("运行时间：");
	printf("%d",end-start);
}

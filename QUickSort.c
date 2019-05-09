#include<stdio.h>
#include<time.h>
void Swap(int arr[],int low,int high){
	int temp;
	temp=arr[low];
	arr[low]=arr[high];
	arr[high]=temp;
}
int Partition(int arr[],int low,int high){
	int base=arr[low];
	while(low<high){
		while(low<high&&arr[high]>=base){
			high--;
		}
		Swap(arr,low,high);
		while(low<high&&arr[low]<=base){
			low++;
		}
		Swap(arr,low,high);
	}
	return low;
}
void QuickSort(int arr[],int low,int high){
	if(low<high){
		int base=Partition(arr,low,high);
		QuickSort(arr,low,base-1);
		QuickSort(arr,base+1,high);
	}
}
int main(){
	int arr[10]={23,45,12,4,2,67,7,45,12,3};
	int start,end;
	start=clock();
	QuickSort(arr,0,10-1);
	end=clock();
	printf("运行时间");
	printf("%d",end-start);
	return 0;
}


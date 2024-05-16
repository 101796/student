#include <stdio.h>

void bubbleSort(char arr[],int n){
	int i, j;
	for (i = 0; i < n-1; i++){
		for(j = 0; j<n-i-1; j++){
			if (arr[j]>arr[j+1]){
				//½»»»arr[j]ºÍarr 
				char temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				
			}
		}
	}
}
void printArray(char arr[], int size){
	int i;
	for(i = 0; i< size;i++)
		printf("%c",arr[i]);
	printf("\n");
}
int main(){
	char arr[10];
	printf("Enter 10 aharcters:\n");
	for(int i = 0; i< 10;i++){
		scanf("%c",&arr[i]);
		
	}
	int n = sizeof(arr) / sizeof(arr[0]);
	
	printf("Original array: \n");
	printArray(arr,n);
	
	bubbleSort(arr, n);
	
	printf("sorted array:\n");
	printArray(arr,n);
	
	return 0;
}

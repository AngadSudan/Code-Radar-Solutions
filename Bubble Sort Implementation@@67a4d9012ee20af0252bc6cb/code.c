#include <stdio.h>

void bubbleSort(int[] arr, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            int temp= arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
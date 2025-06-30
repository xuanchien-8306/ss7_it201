//
// Created by Admin on 6/30/2025.
//
#include <stdint.h>
#include <stdio.h>

void sapxepchon(int arr[], int n){
    for (int i=0; i<n-1; i++){
        int min_idx = i;
        for (int j=i+1; j<n; j++){
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main(){
    int n;
    do{
        printf("Nhap so luong phan tu: ");
        scanf("%d", &n);
    }while (n<=0 || n>=1000);
    int arr[n];
    printf("Nhap vao gia tri trong mang\n");
    for (int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("before: ");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    sapxepchon(arr, n);
    printf("\n  after: ");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
//
// Created by Admin on 6/30/2025.
//
#include <stdio.h>

void sapxepchen(int arr[], int n){
    for (int i=1; i<n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
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

    sapxepchen(arr, n);
    printf("\nafter: ");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
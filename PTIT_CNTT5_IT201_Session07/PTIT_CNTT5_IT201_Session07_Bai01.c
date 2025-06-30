//
// Created by Admin on 6/30/2025.
//
#include <stdio.h>

void sapxep(int arr[], int n){
    for(int i=0; i<n-1; i++){
          for(int j=0; j<n-i-1; j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
          }
    }
}

int main()
{
    int n;
    do
    {
        printf("Nhap so luong phan tu: ");
        scanf("%d", &n);
    }while (n<=0 || n>=1000);

    int arr[n];
    printf("Nhap gia tri tung phan tu:\n");
    for (int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("before: ");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    sapxep(arr, n);
    printf("\nafter: ");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
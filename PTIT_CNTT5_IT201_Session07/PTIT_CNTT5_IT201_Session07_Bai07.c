//
// Created by Admin on 6/30/2025.
//
#include <stdio.h>
int main()
{
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

    int ketqua[1000];
    int idx = 0;
    // đưa so âm về đầu
    for (int i=0; i<n; i++){
        if (arr[i] < 0){
            ketqua[idx++] = arr[i];
        }
    }

    // đưa số 0 về giữa
    for (int i=0; i<n; i++){
        if (arr[i] == 0){
            ketqua[idx++] = arr[i];
        }
    }

    //Đưa so dương về cuối
    for (int i=0; i<n; i++){
        if (arr[i] > 0){
            ketqua[idx++] = arr[i];
        }
    }

    // in mang
    for (int i=0; i<n; i++){
        printf("%d ", ketqua[i]);
    }
    return 0;
}
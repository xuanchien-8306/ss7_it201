//
// Created by Admin on 6/30/2025.
//
#include <stdio.h>
#include <string.h>

void sapxepchuoi(char str[]){
    int n = strlen(str);
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (str[i] > str[j]){
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
int main(){
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, '\n')] = '\0';

    // bỏ dấu cách
    int j=0, i;
    for (i=0; str[i] != '\0'; i++){
        if (str[i] != ' '){
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    if (strlen(str) == 0){
        printf("Khong hop le");
        return 1;
    }

    printf("str = %s\n", str);
    sapxepchuoi(str);
    printf("str = %s\n", str);
    return 0;
}
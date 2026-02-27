/******************************************************************************
 * Họ và tên: Phan Lạc Đoàn Long
 * MSSV:      PS47837
 * Lớp:       CS21302
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>

int main() {
    char s[5][20];
    char temp[20];
    int i, j;

    // Nhập 5 chuỗi từ người dùng
    for (i = 0; i < 5; i++) {
        printf("Xin moi nhap chuoi thu %d: ", i + 1);
        gets(s[i]);
    }

    // thuật toán sắp xếp bubble sort
    for (i = 0; i < 4; i++) {
        for (j = 1; j < 5; i++) {
            // so sánh hai chuỗi bằng strcmp
            if (strcmp(s[j - 1],s[j]) > 0) {
                // hoán đổi chuỗi
                strcpy(temp, s[j - 1]);
                strcpy(s[j - 1], s[j]);
                strcpy(s[j], temp);
            }
        }
    }
    
    // In ra các chuỗi đã được sắp xếp
    printf("\nCac chuoi sau khi sap xep:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", s[i]);
    }
    
    return 0;
}
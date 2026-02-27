/******************************************************************************
 * Họ và tên: Phan Lạc Đoàn Long
 * MSSV:      PS47837
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    printf("Xin moi nhap chuoi: ");
    gets(s);

    int i = 0;
    int nguyenAm = 0;
    int phuAm = 0;

    while(s[i] != '\0') {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y'
            || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y') {
            nguyenAm++;
        } else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            phuAm++;
        }
        i++;
    }
    
    printf("Chuoi '%s' co chua: %d nguyen am va %d phu am", s, nguyenAm, phuAm);

    return 0;
}
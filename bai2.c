/******************************************************************************
 * Họ và tên: Phan Lạc Đoàn Long
 * MSSV:      PS47837
 * Lớp:       CS21302
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>

int main(){
    // Thông tin đăng nhập hệ thống
    char userSys[] = "admin";
    int passSys = 12345;

    // Thông tin đăng nhập của người dùng
    char user[100];
    int pass;

    // Nhập thông tin đăng nhập từ người dùng
    printf("Xin moi nhap username: ");
    gets(user);
    printf("Xin moi nhap password: ");
    scanf("%d", &pass);

    // so sánh thông tin đăng nhập bằng strcmp và pass bằng toán tử ==
    if (strcmp(user, userSys) == 0 && pass == passSys){
        printf("Dang nhap thanh cong");
    } else {
        printf("Dang nhap khong thanh cong");
    }
    
    return 0;
}
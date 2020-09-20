#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, UocNhoNhat; //B1: Khai báo biến
    bool check = true; //B2: Đặt biến check=true
    cin >> n; //B3: Nhập vào số nguyên n;
    if (n>=2) { //B4: i>=2 ?
        for ( int i=2; i<=round(sqrt(n)); i++ ) { //B4.1: Nếu i>=2 thì lặp i từ 2 tới căn n
            if (n % i == 0) { //B4.1.1: Nếu n chia hết cho một số i bất kỳ từ 2 tới căn n
                check=false; //B4.1.1.1: Thì chuyển biến check=false
                UocNhoNhat = i; //B4.1.1.2: Đặt ước nhỏ nhất bằng i mà số n chia hết cho i(Nhìn B4.1)
                break; //B4.1.1.3: Dừng vòng lặp, xuống B5(Nhìn B4.1.1)
            }
        }
    } else check=false; //B4.2: Nếu n<2 thì đặt biến check=false(Nhìn B4 để hiểu rõ hơn)
    if (check==true) cout << "YES" << endl; // Nếu check=true(có nghĩa là n không chia hết cho số i bất kỳ nào từ 1 tới căn n) thì in ra màn hình "YES"
    else cout << UocNhoNhat << endl; //Còn nếu check=false thì in ra màn hình "NO"(Nhìn B4.1.1.1 + B4.2)

    system("pause");
    return 0;
}

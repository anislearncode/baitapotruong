/***********************
HO VA TEN: DANG TRUNG AN
LOP: 10 TIN
ITK62
************************/
#include <iostream>

using namespace std;

int main() {
    int a, b, c, hoanDoi; 
    cout << "Nhap 3 so a, b, c: " << endl;
    cin >> a >> b >> c;
    if (a>b) {
        hoanDoi = a;
        a = b;
        b = hoanDoi;
    }
    if (a>c) {
        hoanDoi = a;
        a = c;
        c = hoanDoi;
    }
    if (b>c) {
        hoanDoi = b;
        b = c;
        c = hoanDoi;
    } 
    cout << a << " " << b << " " << c << endl;

    system("pause");
    return 0;
}

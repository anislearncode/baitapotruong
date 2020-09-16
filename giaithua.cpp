/***********************
HO VA TEN: DANG TRUNG AN
LOP: 10 TIN
ITK62
************************/
#include <iostream>

using namespace std;

int main() {
    int n, tich = 1;
    cout << "Nhap vao 1 so nguyen duong N: " << endl;
    cin >> n;
    for (int i=2; i<=n; i++) {
        tich *= i;
    }
    cout << "Giai thua cua " << n << " : " << tich << endl;

    system("pause");
    return 0;
}

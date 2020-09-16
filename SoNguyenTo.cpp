/***********************
HO VA TEN: DANG TRUNG AN
LOP: 10 TIN
ITK62
************************/
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, UocNhoNhat;
    bool check = true;
    cout << "Nhap 1 so nguyen N: " << endl;
    cin >> n;
    if (n>=2) {
        for ( int i=2; i<=round(sqrt(n)); i++ ) {
            if (n % i == 0) {
                check=false;
                UocNhoNhat = i;
                break;
            }
        }
    } else check=false;
    if (check==true) cout << "YES" << endl;
    else cout << UocNhoNhat << endl;

    system("pause");
    return 0;
}

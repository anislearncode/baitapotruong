/***********************
HO VA TEN: DANG TRUNG AN
LOP: 10 TIN
ITK62
************************/
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double a, b, c, delta, x1, x2;
    cout << "Nhap vao 3 so a, b, c (a khac 0): " << endl;
    cin >> a >> b >> c;
    delta = b*b - 4*a*c;
    if (delta<0) {
        cout << "Phuong trinh vo nghiem." << endl;
    } else if (delta==0) {
        x1 = (-b)/(2*a);
        cout << "Phuong trinh co cap nghiem kep: " << x1 << endl;
    } else {
        x1 = ((-b)+sqrt(delta))/(2*a);
        x2 = ((-b)-sqrt(delta))/(2*a);
        cout << "Phuong trinh co 2 nghiem phan biet: " << endl;
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;
    }

    system("pause");
    return 0;
}

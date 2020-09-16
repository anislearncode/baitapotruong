#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Nhap 3 so nguyen a, b, c: " << endl;
    cin >> a >> b >> c;
    
    if (a>0 && b>0 && c>0) {
        if (a<b+c || b<c+a || c<a+b) {
            if (a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b) {
                cout << a << ", " << b << ", " << c << " la so do 3 canh cua 1 tam giac vuong" << endl;
            } else cout << a << ", " << b << ", " << c << " khong la so do 3 canh cua 1 tam giac vuong" << endl;
        } else cout << a << ", " << b << ", " << c << " khong phai la so do 3 canh cua 1 tam giac" << endl;
    } else cout << a << ", " << b << ", " << c << " khong phai la so do 3 canh cua 1 tam giac" << endl;

    system("pause");
    return 0;
}
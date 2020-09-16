#include <iostream>

using namespace std;

int main() {
    double a, b, c, d, hd1, hd2;
    cout << "Nhap vao 4 so a, b, c, d: " << endl;
    cin >> a >> b >> c >> d;
    hd1 = a; hd2 = c;
    a = b; b = hd1; c = d; d = hd2;
    cout << "Bon so a, b, c, d sau khi da hoan doi a voi b, c voi d: " << endl;
    cout << "A =" << a << endl << "B = " << b << endl << "C = " << c << endl << "D = " << d << endl;

    system("pause");
    return 0;
}
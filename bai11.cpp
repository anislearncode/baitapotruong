#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a, b, c;
    double C, S;
    cin >> a >> b >> c;
    C = (a + b + c)/2;
    S = sqrt(C*(C-a)*(C-b)*(C-c));
    cout << S << endl;
    
    return 0;
}

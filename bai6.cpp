#include <iostream>

using namespace std;

int main() {
    string z;
    cin >> z;
    for (int i=z.length()-1; i>=0; i--) cout << z[i];

    system("pause");
    return 0;
}

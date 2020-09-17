#include <iostream>

using namespace std;

int main() {
    string z;
    cin >> z;
    for (int i=z.length(); i>=0; i--) cout << z[i] << endl;

    system("pause");
    return 0;
}
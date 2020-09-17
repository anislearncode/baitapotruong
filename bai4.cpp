#include <iostream>

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    for (int i=1; i<=n; i++) {
        if (i>((n-1)/2)) count += 1;
    }
    cout << count << endl;

    system("pause");
    return 0;
}
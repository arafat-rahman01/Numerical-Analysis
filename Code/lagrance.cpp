#include <bits/stdc++.h>
using namespace std;
int main() {
    double x0, x1, x2;
    double fx0, fx1, fx2;
    cin >> x0 >> x1 >> x2 >> fx0 >> fx1 >> fx2;
    double x;
    cin >> x;
    double trem1 = fx0 * (x - x1) * (x - x2) / ((x0 - x1) * (x0 - x2));
    double trem2 = fx1 * (x - x0) * (x - x2) / ((x1 - x0) * (x1 - x2));
    double trem3 = fx2 * (x - x0) * (x - x1) / ((x2 - x0) * (x2 - x1));
    double fx = trem1 + trem2 + trem3;
    cout << fx << endl;
}

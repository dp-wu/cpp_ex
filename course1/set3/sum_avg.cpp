//读入n（1 <= n <= 10000）个整数，求它们的和与均值。

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int n, input_num, sum = 0;
    double avg;
    cin >> n;

    for (int i=1; i<=n; ++i) {
      cin >> input_num;
      sum += input_num;
    }
    avg = sum / (double) n;

    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(5);
    cout << sum << ' ' << avg << endl;
}

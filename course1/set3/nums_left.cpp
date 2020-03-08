//你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。
//虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，
//那么经过y小时你还有多少个完整的苹果？

#include <iostream>
using namespace std;

int main() {
    int n, x, y, eaten;
    cin >> n >> x >> y;

    if (y % x) {
        eaten = y / x  + 1;
    else {
        eaten = y / x;
    }
    
    if (eaten >= n) {
        cout << "0" << endl;
    }
    else {
        cout << n - eaten << endl;
    }
}

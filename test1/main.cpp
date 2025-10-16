#include <iostream>
using namespace std;

int main() {
    // 九九乘法表
    cout << "=== 九九乘法表 ===" << endl;
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            cout << i << " * " << j << " = " << i * j << "\t";
        }
        cout << endl;
    }

    cout << endl; // 空一行作為區隔

    // 星號金字塔
    cout << "=== 星號金字塔 ===" << endl;
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

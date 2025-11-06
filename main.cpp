/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int stack[5];
    int top = -1;

    top++;
    stack[top] = 10;
    top++;
    stack[top] = 20;
    top++;
    stack[top] = 30;

    cout << "目前堆疊內容: " << endl;
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }

    cout << endl;

    if (top >= 0) {
        cout << "彈出元素: " << stack[top] << endl;
        top--;
    } else {
        cout << "堆疊是空的，不能彈出!" << endl;
    }

    cout << "彈出後堆疊內容: " << endl;
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    cout << endl;

    return 0;
}

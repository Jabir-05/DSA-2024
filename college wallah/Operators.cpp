#include <iostream>
using namespace std;
int main()
{
    // int num1 = 6;
    // int num2 = 3;
    // // Arithmetic  opertaor
    // cout << num1 + num2 << endl;
    // cout << num1 - num2 << endl;
    // cout << num1 * num2 << endl;
    // cout << num1 / num2 << endl;
    // cout << num1 % num2 << endl;

    // // Relational operator
    // cout << (num1 == num2) << endl;
    // cout << (num1 != num2) << endl;
    // cout << (num1 >= num2) << endl;
    // cout << (num1 <= num2) << endl;

    // LOgical operators

    // bool exp1 = true;
    // bool exp2 = false;
    // cout << (exp1 && exp2) << endl; // false
    // cout << (exp1 || exp2) << endl; // true
    // cout << (!exp1) << endl;        // false

    // Assignment operator
    // num1 += 3;
    // cout << num1 << endl;
    // num2 -= 2;
    // cout << num2 << endl;

    // Biwtise operators
    // int num1 = 5;                  // 0101 (binary no.)
    // cout << (num1 << 1) << endl;   // 10
    // cout << (num1 >> 1) << endl;   // 2
    // int num2 = 8;                  // 1000 (binary no.)
    // cout << (num1 & num2) << endl; // 0
    // cout << (num1 | num2) << endl; // 1101 = 13

    // Misc Operator
    int a = 4;
    cout << sizeof(a) << endl; // 4
    char name = 'a';
    cout << sizeof(a) << endl; // 1

    bool flag;

    a == name ? flag = true : flag = false;
    cout << flag << endl; // false (0)
    cout << (&a) << endl;

    int c = 6;
    cout << (c++) << endl; // post increment
    int b = 5;
    cout << (++b) << endl; // pre incremnet
    
    return 0;
}
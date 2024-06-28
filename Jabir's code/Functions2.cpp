#include <iostream>
using namespace std;

// Pass by value and Pass by reference
// & is  used for pass bt refernce

// void chhangeValue (int &z , int &y){
//     z=100;
//     y=99;
// }

// Default parameters

//   int add  (int a , int b=1, int c=2){
//     return( a+b+c);
//   }

// Q:- What is the output of below code ?

// void decresase ( int n1, int n2){
//     n1--;
//     n2=n2-2;
//     cout<<(n1)<<endl<<(n2)<<endl;
// n1 and n2 are formal parameter

//}

// Q2:- What is the output of below code ?
void makeTwice(int p)
{
    p = p * 2;
}
int main()
{
    int p = 24;
    makeTwice(p);
    cout << p << endl;

    // int p=26;
    // int q=13;
    // decresase (p,q);
    // cout<<(p)<<endl<<(q)<<endl;

    // p and q are actual parameters

    // cout<<add(2)<<endl; //5
    // cout<<add(2,2)<<endl; // 6
    // cout<<add(2,2,3)<<endl; //7
    // int a;
    // a=5;
    // int b=6;
    // chhangeValue(a,b);
    // cout<<a<<endl;
    // cout<<b<<endl;

    // Printing  address of p and q ;

    //    int p=5;
    //    int &q=p;
    //    q++;
    //    cout<<p<<endl;
    //    cout<<&q<<endl;
    //    cout<<&p<<endl;

    return 0;
}

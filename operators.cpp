#include <iostream>
using namespace std;

int main(){
    // Arithmetic operators
    int a=5, b=6;
    cout << "a+b="<<a+b<<endl;
    cout << "a-b="<<a-b<<endl;
    cout << "a/b="<<a/b<<endl;
    cout << "a*b="<<a*b<<endl;
    cout << "a%b="<<a%b<<endl;
    cout << "a++="<<a++<<endl;
    cout << "a--="<<a--<<endl;
    cout << "++a="<<++a<<endl;
    cout << "--a="<<--a<<endl;

    // Assignment Operators
    // int a=3; char b = 'b';

    // Comparision operators
    cout << (a==b) << endl;
    cout << (a!=b) << endl;
    cout << (a>=b) << endl;
    cout << (a>b) << endl;
    cout << (a<=b) << endl;
    cout << (a<b) << endl;

    // Logical operator
    cout << ((a==b) && (a>=b)) << endl;
    cout << ((a!=b) || (a>=b)) << endl;
    cout << !(a!=b) << endl;
    return 0;
}
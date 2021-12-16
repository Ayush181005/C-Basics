#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int* b = &a;
    cout << "Address of a is " << &a << endl;
    cout << "Address of a is " << b << endl;

    cout << "Value of a is " << a << endl;
    cout << "Value at address b is " << *b << endl;

    // Pointer to pointer
    int** c = &b;
    cout << "Address of b is " << &b << endl;
    cout << "Address of b is " << c << endl;

    cout << "Value at address c is " << *c << endl;
    cout << "Value at address value_at(value_at(c)) is " << **c << endl;
    return 0;
}
#include <iostream>
using namespace std;

int num = 19;

void sum(){
    cout << "\nglobal num = " << num;
}

int main(){
    int num = 18; // Integer
    float floatingNum = 1.234; // Float
    char ch = 't'; // Character
    double num2 = 9.82763555; // Double (Decimal numbers of high precision)
    bool isMale = true;
    // short int => has less size
    // long int => big size
    cout << "local num = " << num << "\nfloating num = " << floatingNum << "\nchar = " << ch << "\nDouble num = " << num2 << "\nisMale = " << isMale;
    sum();

    // Variable Scope:-
    // Local Variable: declared inside any function
    // Global Variables: declared outside any function, can be accessed from anywhere
    // can have same names, priority to local

    // Data-types:-
    // Built-in (int, char, float, double, bool)
    // User defined (struct, union, enum)
    // Derived (array, function, pointer)
    return 0;
}
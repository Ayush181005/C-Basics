#include <iostream>
#include <iomanip> // For manipulators
using namespace std;

int main(){
    const int a = 1819; // unchangable
    // a = 89; // error

    // Manipulators: Operators that help controlling data display formatting
    // endl
    // setw => from iomanip
    int b=3, c=78, d=1233;
    cout<<"without setw, b = "<<b<<endl;
    cout<<"without setw, c = "<<c<<endl;
    cout<<"without setw, d = "<<d<<endl;
    cout<<"b = "<<setw(4)<<b<<endl;
    cout<<"c = "<<setw(4)<<c<<endl;
    cout<<"d = "<<setw(4)<<d<<endl;

    // Operator Precedence - https://en.cppreference.com/w/cpp/language/operator_precedence
    int x=3, y=4;
    int c=a*5+b; // This will not always work by BODMAS, it will work according to the operator precedence table
    return 0;
}
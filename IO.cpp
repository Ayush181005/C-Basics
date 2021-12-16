#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Enter value of num1 and num2\n"; // '<<' is inertion operator
    cin >> num1 >> num2; // '>>' is extraction operator
    cout << num1<<"+"<<num2<<"="<<num1+num2<<endl;
    return 0;
}
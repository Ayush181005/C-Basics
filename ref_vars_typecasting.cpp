#include <iostream>
using namespace std;

int c = 1918;

int main(){
    // *********************Built-in data types*********************
    int a, b, c;
    cout<<"Enter a and b: "<<endl;cin>>a>>b;
    c=a+b;
    cout<<"sum is "<<c<<endl;

    cout<<"global c is "<<::c<<endl; // :: is scope resolution operator

    // *********************float, double and long double literals*********************
    float d = 10.7;
    long double e = 10.7;
    cout<<"d = "<<d<<endl<<"e = "<<e<<endl;
    // By default any floating point number like 10.7 is a double
    // to specify it, we write as 10.7f, so by passing this value anywhere it will be taken as float

    cout << "Size of 34.4 = " << sizeof(34.4) <<endl; // double
    cout << "Size of 34.4f = " << sizeof(34.4f) <<endl; // float
    cout << "Size of 34.4F = " << sizeof(34.4F) <<endl; // float
    cout << "Size of 34.4l = " << sizeof(34.4l) <<endl; // long double
    cout << "Size of 34.4L = " << sizeof(34.4L) <<endl; // long double

    // ********************Reference Variables********************
    float x = 455;
    float & y = x;
    cout << x << endl;
    cout << y << endl;
    // we just call the same variable x with different names x and y
    // it has not created a copy or new variable

    // ********************Typecasting*************************
    int var = 45;
    cout << float(var) << endl;
    float var2 = 45.46;
    cout << int(var2) << endl;
    cout << (int)var2 << endl;

    cout << var + var2 << endl;
    cout << var + int(var2) << endl;
    cout << var + (int)var2 << endl;

    return 0;
}
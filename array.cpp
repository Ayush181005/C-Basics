#include <iostream>
using namespace std;

int main(){
    int marks[4] = {23, 45, 56, 78};

    int nums[4];
    nums[0] = 0;
    nums[1] = 1;
    nums[2] = 2;
    nums[3] = 3;

    for (int i = 0; i < 4; i++)
    {
        cout << i << nums[i] << marks[i] << endl;
    }

    // Array Pointers:-

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    // break - to leave the loop:-
    cout<<"Break"<<endl;
    for(int i=0; i<=10; i++){
        cout<<i<<endl; // When i=3, still it will be printed
        if(i==3){
            break;
        }
        cout<<i<<endl; // will not be printed when i=3
    }

    // continue - leave the current iteration, go back to the beginning of the loop and continue with the next iteration
    cout<<"Continue"<<endl;
    for(int i=0; i<=10; i++){
        cout<<i<<endl; // When i=3, still it will be printed
        if(i==3){
            continue;
        }
        cout<<i<<endl; // will not be printed when i=3 but will be continued for when i=4
    }

    return 0;
}
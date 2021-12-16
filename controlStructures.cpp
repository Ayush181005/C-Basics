#include <iostream>
using namespace std;

int main(){
    // BasicControl Structures:-
    // 1. Sequence Structures: Entry -> Action 1 -> Action 2 -> ... -> Action n -> Exit
    // 2. Selection Structures: Entry -> Condition -> Different Actions according to condition -> Exit
    //    - if-else_if-else
    //    - switch case

    cout<<"If Else:-"<<endl;
    int i = 3;
    if(i<3){
        cout<<"i is less than 3"<<endl;
    } else if (i==3){
        cout<<"i = 3"<<endl;
    } else{
        cout<<"i is greater than 3"<<endl;
    }

    cout<<"Switch case:-"<<endl;
    switch(i){
        case 3:
            cout<<"i = 3"<<endl;
            break;
        default:
            cout<<"i is something else and not 3";
    }
    // 3. Loop Structures: Entry -> Condition -> (True) A1 -> Back to condition, (False)
    //    - for loop
    //    - while loop
    //    - do while loop

    cout<<"For Loop:-"<<endl;
    for(i=0; i<=10; i++){
        cout<<i<<endl;
    }

    i = 0;
    cout<<"While Loop:-"<<endl;
    while(i<=10){
        cout<<i<<endl;
        i++;
    }

    i = 0;
    cout<<"Do While Loop:-"<<endl;
    do {
        cout<<"This will execute atleast once"<<endl;
    } while (i>0);
    return 0;
}
#include <iostream>
using namespace std;

#define LIMIT 3

int main() {
    int var[LIMIT] = {10, 100, 1000};
    int *ptr;

    ptr = var;

    for(int i = 0; i < LIMIT; i++){
        cout << "Address of var[" << i << "] = " << ptr << endl;
        cout << "Value of var[" << i << "] = " << *ptr << endl;

        ptr++;
    }

    cout << "---------------" << endl;

    // -- Decrement
    int *rtp;
    rtp = &var[LIMIT - 1];


    for(int i = LIMIT; i > 0; i--){
        cout << "Address of var[" << i << "] = " << rtp << endl;
        cout << "Value of var[" << i << "] = " << *rtp << endl;

        rtp--;
    }

    cout << "---------------" << endl;

    int *wpt;
    wpt = var;
    int i = 0;

    while(ptr <= &var[LIMIT - 1]) {
        cout << "Address of var[" << i << "] = " << wpt << endl;
        cout << "Value of var[" << i << "] = " << *wpt << endl;

        wpt++;
        i++;
    }



    return 0;
}

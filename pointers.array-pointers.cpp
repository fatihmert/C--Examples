#include <iostream>
using namespace std;

#define LIMIT 3

int main() {
    int var[LIMIT] = {10, 100, 1000};
    int *ptr[LIMIT];

    for(int i = 0; i < LIMIT; i++){
        ptr[i] = &var[i];
    }

    for(int i = 0; i < LIMIT; i++){
        cout << "Addr of var[" << i << "] = " << ptr[i] << endl;
        cout << "Value of var[" << i << "] = " << *ptr[i] << endl;
    }

    const char *langs[LIMIT] = {"C", "C++", "Go"};
    for(int i = 0; i < LIMIT; i++){
        cout << "Addr of var[" << i << "] = " << (langs + i) << endl;
        cout << "Value of var[" << i << "] = " << *(langs + i) << endl;
    }


    return 0;
}

#include <iostream>
using namespace std;

#define LIMIT 10

int main() {
    int var1;
    char var2[LIMIT];

    cout << "Address of var1: " << &var1 << endl;
    cout << "Address of var2: " << &var2 << endl;

    int var = 20;
    int *ip;

    ip = &var;

    cout << "Value of var variable: ";
    cout << var << endl;

    // print the address stored in ip pointer variable
    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    // access the value at the address available in pointer
    cout << "Value of *ip variable: ";
    cout << *ip << endl;

    return 0;
}

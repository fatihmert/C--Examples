#include <iostream>
using namespace std;

#define LIMIT 3

int main() {
    int var;
    int *ptr;
    int **pptr;

    var = 3000;

    // keep addr of var
    ptr = &var;

    // keep addr of ptr using addr of op&
    pptr = &ptr;
    cout << "Value of var :" << var << endl;
    cout << "Value available at *ptr :" << *ptr << endl;
    cout << "Value available at **pptr :" << **pptr << endl;

    return 0;
}

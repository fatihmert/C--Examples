#include <iostream>
#include <ctime>
using namespace std;

#define LIMIT 10

int *getRandom(){
    static int r[LIMIT];

    srand((unsigned )time(NULL));

    for(int i = 0; i < LIMIT; i++){
        r[i] = rand();
        cout << r[i] << endl;
    }

    return r;
}

int main() {
    int *p;

    p = getRandom();

    for(int i = 0; i < LIMIT; i++){
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }

    return 0;
}

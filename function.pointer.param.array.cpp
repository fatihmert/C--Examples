#include <iostream>
using namespace std;

double getAverage(int *arr, int size);

int main() {
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;

    avg = getAverage( balance, 5 );
    
    cout << "Average value is: " << avg << endl;

    return 0;
}

double getAverage(int *arr, int size){
    int i, sum = 0;
    double result;

    for(i = 0; i < size; ++i){
        sum += *(arr + i);
    }

    result = double(sum) / size;
    return result;
}

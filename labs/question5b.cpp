#include <iostream>
using namespace std;

int main () {
    int sum = 0;

    for (int num = 74; num < 415; num++) {
        sum += num;
    }

    cout << "The sum of numbers between 73 and 415 is: " << sum << endl;
    return 0;
}

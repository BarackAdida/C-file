#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void gene() {
    srand(time(0));
    for (int num = 1; num <= 5; num ++) {
        int randomnumber = rand() % 100;
        // cout << "Random number:\t" << randomnumber <<"\n";
        cout << "Random number " << num << ": " << randomnumber << "\n";
    }
}

int main () {
    gene();
}
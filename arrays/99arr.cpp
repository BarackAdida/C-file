#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generateHistogram(int n) {
    int rangeStart;
    int rangeEnd;
    int x;
    int i;
    int arr[10] = {0};

    srand(time(0));

    for(int i = 0; i < n; i++) {
        x = rand() % 100;
        arr[x / 10]++;

    }
    
    for (int i = 0; i < 10; i++){
        rangeStart = i * 10;
        rangeEnd = rangeStart + 9;
        cout << rangeStart << "-" << rangeEnd <<"\t" <<arr[i] <<"\n";

    }

    for (int j = 0; j < arr[i]; j++) {
        cout << "X";
    }
}

int main() {
    int n;

    cout << "Enter the number of random values to generate: ";
    cin >> n;

    generateHistogram(n);

    return 0;
}
